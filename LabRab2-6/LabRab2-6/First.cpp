#include "First.h"

void printData(First& other)
{
	cout << "This :" << &other << ", num = " << other.num << endl;
}

First::First()
{
	num = 0;
}

First::First(int _num)
{
	num = _num;
}

int First::getData()
{
	return num;
}
