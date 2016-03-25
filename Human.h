#ifndef HUMAN_H
#define HUMAN_H


#include "Mammal.h"

class Human: 
	public Mammal 
{
public:
	int howManyLegs() {
		return 2;
	}
	bool hasFur() { return false; };
	bool hasTail() { return false; }
	std::string makenoise() { return "Hej"; }
	std::string spieces() { return "Human"; }
};

#endif
