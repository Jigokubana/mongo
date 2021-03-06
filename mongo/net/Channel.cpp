//
// Created by lsmg on 4/5/20.
//


#include "mongo/base/Logger.h"
#include "mongo/net/EventLoop.h"
#include "mongo/net/Channel.h"
#include "mongo/net/Timer.h"

using namespace mongo;
using namespace mongo::net;

Channel::Channel(EventLoop *loop, const std::string& name, int fd):
	loop_(loop),
	name_(name),
	fd_(fd),
	events_(0),
	revents_(0),
	status_(ADD),
	timer_task_map_(),
	timer_callback_map_(),
	tied_(false)
{

}
Channel::~Channel()
{

}
void Channel::Update()
{
    loop_->UpdateChannel(this);
}
void Channel::HandleEvent()
{
	// LEARN shared_ptr<TcpConnection>释放后 Channel在清理前执行回调的段错误
	if (tied_)
	{
		std::shared_ptr<void> guard = tie_.lock();
		if (guard)
		{
			HandleEventWithGuard();
		}
	}
	else
	{
		HandleEventWithGuard();
	}
}
void Channel::AddTimer(const TimeOverCallback& callback, const std::string& key, int sec, int msec, bool repeat, int count)
{
    if (key.empty())
    {
        LOG_ERROR << "Invalid timer key" << key;
        return;
    }

    timer_task_map_[key].reset(new TimerTask(this, key, sec * 1000 + msec, 0, repeat, count));
    timer_callback_map_[key] = callback;

    new_timer_key_ = key;
    Update();
}
void Channel::TimerOver(const std::string& key)
{

    auto callback = timer_callback_map_.find(key);
    auto task = timer_task_map_.find(key);
    if (callback == timer_callback_map_.end())
    {
        LOG_ERROR << "Unknow timer callback " << key;
        return;
    }
    if (task == timer_task_map_.end())
    {
        LOG_ERROR << "Unknow timer task " << key;
        return;
    }

    if (callback->second)
    {
        callback->second(key);
    }
}
void Channel::HandleEventWithGuard()
{
	LOG_DEBUG << "Channel: "<< name_ << " HandlerEvent";

	if (events_ & EPOLLIN)
	{
		if (read_callback_)
		{
			read_callback_();
		}
	}
	if (events_ & EPOLLOUT)
	{
		if (write_callback_)
		{
			write_callback_();
		}
	}
	if (events_ & EPOLLERR)
	{
		if (error_callback_)
		{
			error_callback_();
		}
	}
	if (events_ & EPOLLHUP)
	{
		if (close_callback_)
		{
			close_callback_();
		}
	}
}
void Channel::Tie(const std::shared_ptr<void>& obj)
{
	tied_ = true;
	tie_ = obj;
}
