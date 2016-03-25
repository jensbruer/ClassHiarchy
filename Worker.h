#ifndef WORKER_H
#define WORKER_H


//#include <string>
//#include <string.h>

class Worker {
public:
	virtual bool hasJob() = 0;
	virtual double manyYearsWorked() = 0;
	virtual double salary() = 0;
	//virtual string worksAt() = 0;

};

#endif
