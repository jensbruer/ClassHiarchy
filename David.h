
#ifndef DAVID_H
#define DAVID_H

#include "Adult.h"

class David :
	public Adult
{
public:
	//From Adult
	bool isAWorker() { return true; }
	bool ownerOfACompany() { return false; }
	std::string gymnasium() { return "Blackeberg"; }

	//From Worker
	bool hasJob() { return true; }
	double manyYearsWorked() { return 0.1; }
	double salary() { return 35000; }

	//From Programmer
	//bool knowJava() { return false; }
	//int startedProgramming() { return 23; }

	//From Person
	bool isFriendly() { return true; }
	std::string name() { return "David"; }
	int age() { return 31; }
};

#endif

