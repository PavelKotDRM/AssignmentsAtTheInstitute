#include "Functinon.h"

double* Functinon::addNewToEnd(double value, double* mass)
{
	if (quantity == 1) {
		mass = new double[1];
		mass[0] = value;
		return mass;
	}
	double* tmp = new double[quantity];
	for (unsigned int i = 0; i < quantity - 1; i++)
	{
		tmp[i] = mass[i];
	}
	delete[] mass;
	mass = new double[quantity];
	for (unsigned int i = 0; i < quantity - 1; i++)
	{
		mass[i] = tmp[i];
	}
	mass[quantity - 1] = value;
	delete[] tmp;
	return mass;
}

void Functinon::startFunction()
{
	double x=0;
	double y=0;
	unsigned int i = 0;
	while (x <= b)
	{
		x = a + h * i;
		for (unsigned int j = 1; j < N + 1; j++)
		{
			y = y + (j * j) / (2 * j + 1) * pow(x,j-1);
		}
		quantity++;
		X = addNewToEnd(x, X);
		Y = addNewToEnd(y, Y);
		i++;
	}

}

Functinon::Functinon()
{
	a = 0.1;
	b = 1.2;
	h = 0.1;
	quantity = 0;
	N = 20;
	startFunction();
}

Functinon::~Functinon()
{
	delete[] X, Y;
}

string Functinon::GetMass()
{
	string str;
	char tmpStr[40]=" ";
	str = "  X       Y  \n";
	for (unsigned int i = 0; i < quantity; i++)
	{
		sprintf_s(tmpStr, "%0.4f %0.4f \n\0", X[i], Y[i]);
		str += tmpStr;
		/*
		str += to_string(X[i]);
		str += "    ";
		str += to_string(Y[i]);
		str += '\n';
		*/
	}

	return str;
}
