#pragma once
#include "Second.h"
class Fifth : public Second
{
	int numFifth;
public:
	Fifth() :Second() { numFifth = 0; }
	Fifth(int _num) :Second(_num) { numFifth = _num; }
	int getData() { return numFifth; }
};

