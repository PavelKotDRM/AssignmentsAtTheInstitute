#pragma once

#ifndef SQUARE_H
#define SQUARE_H


#include <string>
#include <math.h>
using namespace std;
#include <iostream>


class Square
{
private:
	int a; //side
	double S; //area
public:
	Square();
	Square(int _a);
	Square(const Square& Square);
	~Square();

	void setSide(int _a);
	string inputObject(Square m);
	Square getObject();
	Square getInputObject(Square m);

	void calculateTheArea();
	string outData();
};
#endif

