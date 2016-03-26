#ifndef ADULT_H
#define ADULT_H


#include "Worker.h"
#include "Person.h"

class Adult:
	public Person,
	public Worker
{
public:
	virtual bool isAWorker() = 0;
	virtual bool ownerOfACompany() = 0;
	virtual std::string name() = 0;
	virtual std::string gymnasium() = 0;
};

#endif
