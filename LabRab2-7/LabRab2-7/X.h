#pragma once
#include <iostream>
class X
{
	int xOne, xTwo;
public:
	X(int _xOne, int _xTwo) : xOne(_xOne), xTwo(_xTwo) {}
	~X() {}
	int getData(int number/* Номер x: xOne единица(1) , xTwo двойка(2) */);
	virtual void setData(int massiv[2]/* massiv[0] = xOne; massiv[1] = xTwo; */);//установить новые значения 
	void printData();
	friend void print(X& other);
	friend void setDataFX(int massiv[2], X& other);
};

