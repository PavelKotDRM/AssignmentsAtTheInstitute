#pragma once
#include "X.h"
class Y :
	public X
{
	int y;
public:
	Y(int _xOne, int _xTwo, int _y) : X(_xOne, _xTwo), y(_y) {}
	~Y() {}
	int getY();
	virtual void setData(int massiv[3]/* massiv[0] = xOne; massiv[1] = xTwo; massiv[2] = y */);
	int run();
	void printData();
	friend void print(Y& other);
	friend void setDataFY(int massiv[3], Y& other);


};

