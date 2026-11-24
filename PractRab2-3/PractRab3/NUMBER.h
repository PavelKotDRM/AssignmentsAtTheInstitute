#pragma once
#ifndef NUMBER_H
#define NUMBER_H
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

class NUMBER
{
	char strb[20];//decimal number represented as a string

	char stre[50];//number converted to the specified base, represented as a string

	unsigned int osnova;//number base



public://methods

	NUMBER() {}//default constructor for arrays

	NUMBER(char* n, unsigned int f);//constructor with parameters

	~NUMBER() {}//destructor

	void Perevod();//convert the number to the specified base

private:

	bool Analiz();//validate the parameters:O

	//1 - all parameters are valid, 0 - invalid

	//improve diagnostics

public:

	friend void Print(NUMBER& object);//friend print function
};

#endif // !NUMBER_H