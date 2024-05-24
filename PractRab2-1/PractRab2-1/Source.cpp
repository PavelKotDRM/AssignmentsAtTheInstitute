#include <iostream>
#include "Functinon.h"
int main() {
	Functinon* f1=new Functinon();
	cout << "Completed 1" << endl;
	cout << f1->GetMass();
	f1->~Functinon();
}