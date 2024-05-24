#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <string>
#include <ctime>
#include <math.h>
using namespace std;

class Triangle
{
private:
	string Name;
	double a, b, c;
	double S, P;

	void calculatePerimeter();
	void calculateArea();

public:
	Triangle();//standart constructor
	Triangle(const Triangle& object);//copy constructor
	Triangle(char* _name, int _a, int _b, int _c);//constructor int double float
	Triangle(char* _name, float _a, float _b, float _c);
	Triangle(char* _name, double _a, double _b, double _c);
	Triangle(string _name, int _a, int _b, int _c);
	Triangle(string _name, float _a, float _b, float _c);
	Triangle(string _name, double _a, double _b, double _c);

	string printData();
	char* printDataChar();
};

#endif