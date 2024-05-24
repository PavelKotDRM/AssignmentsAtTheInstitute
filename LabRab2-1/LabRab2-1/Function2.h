#pragma once
#include <math.h>
#include <string>
using namespace std;

#ifndef FUNCTION2_H
#define FUNCTION2_H

class Functinon2
{
private:
	double aX, aY, aZ, bX, bY, bZ, h;
	double* X, * Y, * Z, * T;
	unsigned int quantity;


	double* addNewToEnd(double value, double* mass);
	void startFunction();
public:

	Functinon2();
	Functinon2(double _x, double _y, double _z);
	~Functinon2();

	void setData(double _x, double _y, double _z);
	void run();
	void cleanFunc();
	string GetMass();

protected:

};

#endif FUNCTION2_H

