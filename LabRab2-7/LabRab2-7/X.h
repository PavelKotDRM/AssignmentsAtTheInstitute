#pragma once
#include <iostream>
class X
{
	int xOne, xTwo;
public:
	X(int _xOne, int _xTwo) : xOne(_xOne), xTwo(_xTwo) {}
	~X() {}
	int getData(int number/* ����� x: xOne �������(1) , xTwo ������(2) */);
	virtual void setData(int massiv[2]/* massiv[0] = xOne; massiv[1] = xTwo; */);//���������� ����� �������� 
	void printData();
	friend void print(X& other);
	friend void setDataFX(int massiv[2], X& other);
};

