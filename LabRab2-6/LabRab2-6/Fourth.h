#pragma once
#include "First.h"
#include "Third.h"
class Fourth : public First, public Third
{
	int numFourth;
public:
	Fourth() :First() { numFourth = 0; }
	Fourth(int _num) : First(_num) { numFourth = _num; }
	int getData();
	friend void printData(Fourth& other);
};

