#include "HandleAdult.h"
#include <iostream>
#include <string>

std::string is_friendly(bool friendly) {
	std::string answer;
	if (friendly) answer = "yes";
	else answer = "no";

	return answer;
}

void HandleAdult::printAttributes(const std::vector<Adult*>& v) const {
	Adult *a;

	for (auto x: v) {
		std::cout << "Name: " << x->name() << "\n";
		std::cout << "Says: " << x->makenoise() << "\n";
		std::cout << "Age: " << x->age() << "\n";
		std::cout << "Is friendly?: " << is_friendly(x->isFriendly() ) << "\n\n";

	}
}