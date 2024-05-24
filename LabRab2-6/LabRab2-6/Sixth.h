#pragma once
#include "Fourth.h"
class Sixth : public Fourth
{
	int numSix;
public:
	Sixth() :Fourth() { numSix = 0; }
	Sixth(int _num) :Fourth(_num) { numSix = _num; }
	int getData() { return numSix; }
};

