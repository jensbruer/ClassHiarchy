#ifndef PERSON_H
#define PERSON_H


#include "Human.h"

class Person : 
	Human
{
public:

	virtual bool isFriendly() = 0;
};


#endif
