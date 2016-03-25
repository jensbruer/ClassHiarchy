#include <iostream>
#include "John.h"
#include "Cat.h"

using namespace std;

int main() {
	cout << "Hello \n";

	Mammal *m1;

	Worker *w;

	John john;

	Cat Misse;
	m1 = &Misse;

	

	cout << "Mammal m1, says: " << m1->makenoise() << "\n";
	cout << "John, has fur?: " << john.hasFur() << "\n";
	cout << "John, knows java?: " << john.knowJava() << "\n";


	cin.get();
}

