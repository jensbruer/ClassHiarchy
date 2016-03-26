#ifndef JOHN_H
#define JOHN_H


#include "Adult.h"
#include "Programmer.h"

class John :
	public Adult,
	public Programmer
{
public:
	//From Adult
	bool isAWorker() { return true; }
	bool ownerOfACompany() { return false; }

	//From Worker
	bool hasJob() { return true; }
	double manyYearsWorked() { return 1.5; }
	double salary() { return 75000; }

	//From Programmer
	bool knowJava() { return true; }
	int startedProgramming() { return 16; }

	//From Person
	bool isFriendly() { return true; }
	std::string name() { return "John"; }
	int age() { return 34; }
};

#endif

