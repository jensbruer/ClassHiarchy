#ifndef PROGRAMMER_H
#define PROGRAMMER_H



#include "Worker.h"

class Programmer: Worker {
public:
	virtual bool knowJava() = 0;
	virtual int startedProgramming() = 0;
};


#endif
