#pragma once
#include <cstdlib>
#include <ctime>
class Masb
{
protected:
	int* massB;
	int nB;
public:
	Masb();
	Masb(int n);
	Masb(const Masb& other);
	~Masb();
};

