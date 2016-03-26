#include <iostream>
#include "John.h"
#include "Jens.h"
#include "David.h"
#include "Cat.h"
#include <vector>
#include "HandleAdult.h"
#include "HandleProgrammer.h"

using namespace std;

int main() {
	cout << "Hello \n";

	Mammal *m1;

	Worker *w;

	
	Adult *a1;
	Adult *a2;
	Adult *a3;

	
	John john;
	Jens jens;
	David david;

	a1 = &john;
	a2 = &jens;
	a3 = &david;

	
	Programmer *jb;
	Programmer *ja;

	jb = &jens;
	ja = &john;

	Cat Misse;
	m1 = &Misse;


	cout << "Mammal m1, says: " << m1->makenoise() << "\n";
	cout << "John, has fur?: " << john.hasFur() << "\n";
	cout << "John, knows java?: " << john.knowJava() << "\n";

	cout << "Jens, says: " << jens.makenoise() << "\n";
	cout << "Jens, knows java?: " << jens.knowJava() << "\n";
	cout << "\n";

	std::vector<Adult*> adults;
	std::vector<Programmer*> programmers;
	
	adults.push_back(a1);
	adults.push_back(a2);
	adults.push_back(a3);

	programmers.push_back(ja);
	programmers.push_back(jb);

	HandleAdult Ha;
	HandleProgrammer Hp;

	Ha.printAttributes(adults);
	Hp.printAttributes(programmers);

	cin.get();
}

