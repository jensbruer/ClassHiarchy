#ifndef JOHN_H
#define JOHN_H


#include "Adult.h"
#include "Programmer.h"

class John :
	Adult,
	Programmer
{
	bool hasJob() { return true; }
	double salary() { return 75000; }

};

#endif

