#include "Masb.h"

Masb::Masb() {
	srand(time(NULL));
	nB = rand() % 100 + 1;
	massB = new int[nB];
	for (int i = 0; i < nB; i++)
	{
		massB[i] = rand() % 10;
	}
}

Masb::Masb(int n) {
	srand(time(NULL));
	nB = n;
	massB = new int[nB];
	for (int i = 0; i < nB; i++)
	{
		massB[i] = rand() % 10;
	}
}

Masb::Masb(const Masb& other) {
	this->nB = other.nB;
	this->massB = new int[this->nB];
	for (int i = 0; i < other.nB; i++)
	{
		this->massB[i] = other.massB[i];
	}
}

Masb::~Masb()
{
	delete[] massB;
}