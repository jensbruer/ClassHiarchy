#ifndef ADULT_H
#define ADULT_H


#include "Worker.h"
#include "Person.h"

class Adult:
	public Person,
	public Worker
{
	virtual bool isAWorker() = 0;
	virtual bool ownerOfACompany() = 0;

};

#endif
