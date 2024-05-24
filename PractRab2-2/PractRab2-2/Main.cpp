
//#include <iostream>
#include "Square.h"
using namespace std;

int main() {
	Square* a1 = new Square(4);
	a1->calculateTheArea();
	cout << a1->outData();
	Square* a2 = & a1->getObject();
	cout << a1->inputObject(*a2);
	Square* a3 = & a1->getInputObject(*a2);
}