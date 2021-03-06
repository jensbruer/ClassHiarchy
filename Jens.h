#ifndef JENS_H
#define JENS_H


#include "Adult.h"
#include "Programmer.h"

class Jens :
	public Adult,
	public Programmer
{
public:
	//From Adult
	bool isAWorker() { return true; }
	bool ownerOfACompany() { return false; }
	std::string gymnasium() { return "Spanga"; }

	//From Worker
	bool hasJob() { return true; }
	double manyYearsWorked() { return 0.1; }
	double salary() { return 35000; }
	std::string worksAt() { return "MorganStanley"; }


	//From Programmer
	bool knowJava() { return false; }
	int startedProgramming() { return 23; }

	//From Person
	bool isFriendly() { return true; }
	std::string name() { return "Jens"; }
	int age() { return 34; }
};

#endif

