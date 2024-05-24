#pragma once
#include "Drob.cpp"
class Rational
{
	Drob one;
	Drob two;
	unsigned int Nod(unsigned int a, unsigned int b);
		
public:
	Rational() {};
	Rational(Drob fitrs, Drob sekond);
	~Rational();
	Drob summ();//+
	Drob sub();//-
	Drob mul();//*
	Drob div();// /
	bool equal();

};

