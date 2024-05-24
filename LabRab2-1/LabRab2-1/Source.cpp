#include <iostream>
#include "Function2.h"
int main() {
	Functinon2* f1 = new Functinon2();
	Functinon2* f2 = new Functinon2(12.3 * pow(10.0,-1.0) , 15.4, 0.252 * pow(10.0,3.0));
	cout << "Completed 1" << endl;
	cout << f1->GetMass();
	cout << "Completed 2" << endl;
	cout << f2->GetMass();
	f1->~Functinon2();
	f2->~Functinon2();
}