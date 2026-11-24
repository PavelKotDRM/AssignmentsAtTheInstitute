#pragma once
#include <iostream>
class X
{
	int xOne, xTwo;
public:
	X(int _xOne, int _xTwo) : xOne(_xOne), xTwo(_xTwo) {}
	~X() {}
	int getData(int number/* x number: xOne is 1, xTwo is 2 */);
	virtual void setData(int massiv[2]/* massiv[0] = xOne; massiv[1] = xTwo; */);//set new values
	void printData();
	friend void print(X& other);
	friend void setDataFX(int massiv[2], X& other);
};

