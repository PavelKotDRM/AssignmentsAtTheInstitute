#pragma once
#include "Masa.h"
#include "Masb.h"
#include <iostream>
#include <string>
using namespace std;
class Work : public Masa, public Masb
{
private:
	int nw;
	int* work;
public:
	Work();
	Work(int na, int nb);
	Work(const Work& other);
	~Work();

	friend ostream& operator << (ostream& out, const Work& object);
};

