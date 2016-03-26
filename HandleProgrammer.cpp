#include "HandleProgrammer.h"
#include <iostream>
#include <string>

std::string convert_bool_to_string(bool boolval) {
	std::string answer;
	if (boolval) answer = "yes";
	else answer = "no";

	return answer;
}

void HandleProgrammer::printAttributes(const std::vector<Programmer*>& v) const {
	Programmer *a;
	std::cout << "Professional information: \n";
	for (auto x : v) {
		std::cout << "Name: " << x->name() << "\n";
		std::cout << "Has job: " << convert_bool_to_string(x->hasJob()) << "\n";
		std::cout << "Knows Java?: " << convert_bool_to_string(x->knowJava()) << "\n";
		std::cout << "Years worked: " << x->manyYearsWorked() << "\n";
		std::cout << "Salary: " << x->salary() << "\n";
	}
}