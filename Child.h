#ifndef CHILD_H
#define CHILD_H


#include "Person.h"


class Child : Person {
	virtual bool likesVideoGames() = 0;
	virtual std::string name() = 0;
};

#endif
