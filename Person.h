#ifndef PERSON_H
#define PERSON_H


#include "Human.h"

class Person : 
	public Human
{
public:

	virtual bool isFriendly() = 0;
	virtual std::string name() = 0;
	virtual int age() = 0;
	
};


#endif
