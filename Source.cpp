#include <iostream>
#include "John.h"
#include "Cat.h"

using namespace std;

int main() {
	cout << "Hello \n";

	Mammal *m1;

	Cat Misse;
	m1 = &Misse;

	cout << "Mammal m1, says: " << m1->makenoise() << "\n";
	cin.get();
}

