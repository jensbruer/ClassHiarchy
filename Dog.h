#ifndef DOG_H
#define DOG_H


#include "Mammal.h"

class Dog : Mammal {
	int howManyLegs() {
		return 4;
	}
	virtual bool hasFur() = 0;
	bool hasTail() { return true; }
	std::string makenoise() { return "Woff"; }
	std::string spieces() { return "Dog"; }
};

#endif
