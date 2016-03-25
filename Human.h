#ifndef HUMAN_H
#define HUMAN_H


#include "Mammal.h"

class Human: Mammal {
public:
	int howManyLegs() {
		return 2;
	}
	bool hasFur() { return false; };
	bool hasTail() { return false; }
};

#endif
