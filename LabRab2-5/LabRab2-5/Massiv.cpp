#include "Massiv.h"

Massiv::Massiv()
{
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		mass[i] = rand() % 20;
	}
}

Massiv::~Massiv()
{
	for (int i = 0; i < N; i++)
	{
		this->mass[i] = 0;
	}
}

int Massiv::countSum()
{
	int summ = 0;
	for (int i = 0; i < N; i++)
	{
		summ += this->mass[i];
	}
	return summ;
}

void Massiv::show()
{
	string s1;
	s1.clear();
	for (int i = 0; i < N; i++)
	{
		s1 += to_string(this->mass[i]);
		s1 += " ";
		if ((i + 1) % 10 == 0) s1 += '\n';
	}
	s1 += '\n';
	cout << s1;
}
