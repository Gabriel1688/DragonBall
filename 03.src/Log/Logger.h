/*
 * Logger.h
 *
 *  Created on: Jul 16, 2014
 *      Author: james
 */

#ifndef LOGGER_H_
#define LOGGER_H_

class Logger {
public:
	Logger();
	Logger(Logger &logger);
	Logger&  operator = (Logger &logger);
	bool Start(int priority,string &message);
	virtual ~Logger();
};

#endif /* LOGGER_H_ */
