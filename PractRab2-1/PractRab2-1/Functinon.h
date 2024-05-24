#pragma once
#include <math.h>
#include <string>
using namespace std;

#ifndef FUNCTION_H
#define FUNCTION_H

class Functinon
{
private:
	double a, b, h;
	double* X, *Y;
	unsigned int quantity, N;


	double* addNewToEnd(double value, double* mass);
	void startFunction();
public:

	Functinon();
	~Functinon();

	string GetMass();

protected:
	
};

#endif FUNCTION_H

