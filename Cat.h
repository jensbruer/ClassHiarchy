#ifndef CAT_H
#define CAT_H


#include "Mammal.h"

class Cat : public Mammal {
public:
	int howManyLegs() {
		return 4;
	}
	virtual bool hasFur() { return true; }
	bool hasTail() { return true; }
	std::string makenoise() { return "Meow"; }
};

#endif