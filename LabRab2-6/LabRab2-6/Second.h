#pragma once
#include "First.h"
class Second : public First
{
	int numSek;
public:
	Second() :First() { numSek = 0; }
	Second(int _num) : First(_num) { numSek = _num; }
	int getData() { return numSek; }
};

