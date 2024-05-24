#pragma once
#include <cstdlib>
#include <ctime>
class Masa
{
protected:
	int* massA;
	int nA;
public:
	Masa();
	Masa(int n);
	Masa(const Masa& other);
	~Masa();
};

