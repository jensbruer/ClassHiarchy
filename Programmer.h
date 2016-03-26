#ifndef PROGRAMMER_H
#define PROGRAMMER_H



#include "Worker.h"

class Programmer: 
	public Worker 
{
public:
	virtual bool knowJava() = 0;
	virtual int startedProgramming() = 0;
	virtual std::string worksAt() = 0;
	virtual std::string name() = 0;

};


#endif
