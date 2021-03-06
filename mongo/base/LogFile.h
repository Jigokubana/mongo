//
// Created by lsmg on 5/23/20.
//

#ifndef _LOGFILE_H_
#define _LOGFILE_H_

#include <cstring>
#include <cstdio>
#include <string>

#include "mongo/base/Timestamp.h"
#include "mongo/base/MutexGuard.h"

namespace mongo
{
/**
 * 将内存日志记录到硬盘
 */
class LogFile : noncopyable
{
public:
	/**
	 *
	 * @param prefix_name 日志文件前缀
	 * @param file_dir 日志文件目录
	 */
	LogFile(const std::string& prefix_name, const std::string& file_dir);
	~LogFile();

	void Append(const char* str, size_t len);

private:

	const static int LOG_INTERVAL;
	Timestamp last_log_time_;

	const static int BUFFER_SIZE = 64 * 1024;

	char buffer[BUFFER_SIZE];
	size_t write_idx_;

	FILE* out_fp_;

	bool BufferEnough(size_t len);

	bool TimeUpFlush();

	void TryFlush(size_t len);

	void Flush();

	Mutex buffer_mutex_;

	std::string GetFileName();
};
}

#endif //_LOGFILE_H_
