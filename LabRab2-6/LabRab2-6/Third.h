#pragma once
#include "First.h"
class Third : public First
{
	int numThird;
public:
	Third() :First() { numThird = 0; }
	Third(int _num) : First(_num) { numThird = _num; }
	int getData() { return numThird; }
};

