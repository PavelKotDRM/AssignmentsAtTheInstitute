#include "Fourth.h"

int Fourth::getData()
{
	return this->numFourth;
}

void printData(Fourth& other)
{
	cout << "This :" << &other << ", num = " << other.getData() << endl;
}
