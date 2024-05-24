#include "X.h"

int X::getData(int number)
{
	int data;
	switch (number)
	{
	case 1:
		data = xOne;
		break;
	case 2:
		data = xTwo;
		break;
	default:
		data = 0;
		break;
	}
	return data;
}

void X::setData(int massiv[2])
{
	if (massiv != nullptr) {
		xOne = massiv[0];
		xTwo = massiv[1];
	}
	return;
}

void X::printData()
{
	std::cout << "x1 = " << this->xOne << ", x2 = " << this->xTwo << std::endl;
}

void print(X& other)
{
	std::cout << "x1 = " << other.xOne << ", x2 = " << other.xTwo << std::endl;
}

void setDataFX(int massiv[2], X& other)
{
	if (massiv != nullptr) {
		other.xOne = massiv[0];
		other.xTwo = massiv[1];
	}
	return;
}
