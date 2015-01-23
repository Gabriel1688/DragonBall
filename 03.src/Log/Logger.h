/*
 * Logger.h
 *
 *  Created on: Jul 16, 2014
 *      Author: james
 */

#ifndef LOGGER_H_
#define LOGGER_H_
#include <string>
#include <fstream>
#include <iostream>

class Logger {
public:
	 enum Priority
	    {
	        DEBUG,
	        CONFIG,
	        INFO,
	        WARNING,
	        ERROR
	    };

	static void Start(int priority,const string& logFile);
	static void stop();
	static void write(Priority priority,const string& message)
	virtual ~Logger();
private:
	Logger();
	Logger(Logger &logger);
	Logger&  operator = (Logger &logger) {}

	static Logger instance;

};

#endif /* LOGGER_H_ */
