#ifndef LOG_H
#define LOG_H

#include "common.h"

class Log{
	/*These are public methods:*/
	public:
		const int LogLevelError = 0;
		const int LogLevelWarning = 1;
		const int LogLevelInfo = 2;
	private:
		/*We are using m_ to indicate this is a class member variable
		 * By default, we are setting it to LegLevelInfo meaning everything 
		 * should get printed*/
		int m_LogLevel = LogLevelInfo;
	/*These are public variables*/
	public:
		void SendMessage(int level, const char* message);
		void Warn(const char* message);
		void Error(const char* message);
		void Info(const char* message);
};


#endif
