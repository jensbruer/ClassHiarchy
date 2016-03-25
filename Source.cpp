#include <iostream>
#include "John.h"
#include "Jens.h"
#include "Cat.h"

using namespace std;

int main() {
	cout << "Hello \n";

	Mammal *m1;

	Worker *w;

	John john;
	Jens jens;

	Cat Misse;
	m1 = &Misse;

	Programmer *jb;


	cout << "Mammal m1, says: " << m1->makenoise() << "\n";
	cout << "John, has fur?: " << john.hasFur() << "\n";
	cout << "John, knows java?: " << john.knowJava() << "\n";


	cin.get();
}

