//
// Created by lsmg on 5/5/20.
//

#include "UdpDgram.h"

using namespace mongo;
using namespace mongo::net;

UdpDgram::UdpDgram(const InetAddress& peer_addr):
peer_addr_(peer_addr),
dgram_addr_(),
input_buffer_(4096),
output_buffer_()
{

}

void UdpDgram::Send(const char* str, size_t len)
{

}

void UdpDgram::Send(const std::string& str)
{

}

bool UdpDgram::RecvFrom(const Socket& sockfd)
{

	struct sockaddr_in addr{};
	socklen_t addr_len = static_cast<socklen_t>(sizeof addr);

	size_t recv_size = recvfrom(sockfd.GetFd(), input_buffer_.WriteBegin(),
		input_buffer_.WriteableBytes(), 0,
		(sockaddr*)&addr, &addr_len);

	if (recv_size > 0)
	{
		input_buffer_.AddWriteIndex(recv_size);
		dgram_addr_.SetAddr(addr);

		return true;
	}
	return false;
}
