#include <iostream>
#include "John.h"
#include "Jens.h"
#include "David.h"
#include "Cat.h"
#include <vector>
#include "HandleAdult.h"

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

	Cat Misse;
	m1 = &Misse;

	Programmer *jb;
	Programmer *ja;

	
	cout << "Mammal m1, says: " << m1->makenoise() << "\n";
	cout << "John, has fur?: " << john.hasFur() << "\n";
	cout << "John, knows java?: " << john.knowJava() << "\n";

	cout << "Jens, says: " << jens.makenoise() << "\n";
	cout << "Jens, knows java?: " << jens.knowJava() << "\n";

	std::vector<Adult*> adults;

	adults.push_back(a1);
	adults.push_back(a2);
	adults.push_back(a3);

	HandleAdult Ha;

	Ha.printAttributes(adults);

	cin.get();
}

