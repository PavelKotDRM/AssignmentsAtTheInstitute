#include "Y.h"

int Y::getY()
{
	return y;
}

void Y::setData(int massiv[3])
{
	if (massiv != nullptr) {
		X::setData(massiv);
		y = massiv[2];
	}
	return;
}

int Y::run()
{
	int _xOne = X::getData(1);
	int _xTwo = X::getData(2);
	return (_xOne + _xTwo) * this->y;
}

void Y::printData()
{
	X::printData();
	std::cout << " y =" << this->y << std::endl;
}

void print(Y& other)
{
	X t = other;
	std::cout << "x1 = " << t.getData(1) << ", x2 = " << t.getData(2) << " y =" << other.y << std::endl;
}

void setDataFY(int massiv[3], Y& other)
{
	if (massiv != nullptr) {
		X* tmp = &other;
		tmp->setData(massiv);
		other.y = massiv[2];
	}
	return;
}

