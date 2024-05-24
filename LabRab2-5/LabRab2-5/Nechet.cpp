#include "Nechet.h"

void Nechet::addInVec(int value)
{
	int* tmpVec;
	tmpVec = new int[this->n];
	if (this->n != 0) {
		for (int i = 0; i < this->n ; i++)
		{
			tmpVec[i] = this->vec[i];
		}
	}
	this->n++;
	this->vec = new int[this->n];
	if (this->n != 0) {
		for (int i = 0; i < this->n - 1; i++)
		{
			this->vec[i] = tmpVec[i];
		}
	}
	this->vec[n - 1] = value;
	delete[] tmpVec;
}

Nechet::Nechet()
{
	n = 0;
	vec = new int[1];
	vec[0] = 0;
	for (int i = 0; i < N; i++)
	{
		bool simple = false;
		if (this->mass[i] != 0)
		{
			for (int j = 2; j < this->mass[i]; j++)
			{
				simple = true;
				if (this->mass[i] % j == 0)
				{
					simple = false;
					break;
				}
			}
		}
		if (simple)
		{
			addInVec(mass[i]);
		}
	}
}

Nechet::~Nechet()
{
	delete[] this->vec;
}

void Nechet::show() {
	Massiv::show();
	string s1;
	s1.clear();
	for (int i = 0; i < n; i++)
	{
		s1 += to_string(this->vec[i]);
		s1 += " ";
		if ((i + 1) % 10 == 0) s1 += '\n';
	}
	s1 += '\n';
	cout << s1;
}

int Nechet::summ()
{
	//Massiv::countSum();
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += this->vec[i];
	}
	return summ;
}
