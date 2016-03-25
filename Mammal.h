#ifndef MAMMAL_H
#define MAMMAL_H

#include <string>

class Mammal {
public:
	virtual int howManyLegs() = 0;
	virtual bool hasFur() = 0;
	virtual bool hasTail() = 0;
	virtual std::string makenoise() = 0;
	virtual std::string spieces() = 0;
};

#endif
