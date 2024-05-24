#include "Masa.h"

Masa::Masa() {
	srand(time(NULL));
	nA = rand() % 100 + 1;
	massA = new int[nA];
	for (int i = 0; i < nA; i++)
	{
		massA[i] = rand() % 10;
	}
}

Masa::Masa(int n) {
	srand(time(NULL));
	nA = n;
	massA = new int[nA];
	for (int i = 0; i < nA; i++)
	{
		massA[i] = rand() % 10;
	}
}

Masa::Masa(const Masa& other) {
	this->nA = other.nA;
	this->massA = new int[this->nA];
	for (int i = 0; i < other.nA; i++)
	{
		this->massA[i] = other.massA[i];
	}
}

Masa::~Masa()
{
	delete[] massA;
}
