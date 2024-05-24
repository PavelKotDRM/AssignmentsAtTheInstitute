#include "Function2.h"
double* Functinon2::addNewToEnd(double value, double* mass)
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

void Functinon2::startFunction()
{
	double x = 0;
	double y = 0;
	double z = 0;
	double t = 0;
	unsigned int i = 0;
	while (x <= bX && y <= bY && z <= bZ)
	{
		x = aX + h * i;
		y = aY + h * i;
		z = aZ + h * i;
		double j = pow(y, x + 1.0) / (3.0 + pow(y - 2, 1.0 / 3.0));
		double s = (x + y / 2.0) / (2.0 * abs(x + y));
		double r = pow(x + 1.0, (-1.0) / sin(z));
		t = j + s * r;
		quantity++;
		X = addNewToEnd(x, X);
		Y = addNewToEnd(y, Y);
		Z = addNewToEnd(z, Z);
		T = addNewToEnd(t, T);
		i++;
	}


}

Functinon2::Functinon2()
{
	aX = 2.0;
	bX = 3.2;
	aY = 2.0;
	bY = 3.2;
	aZ = 2.0;
	bZ = 3.2;
	h = 0.1;
	quantity = 0;
	startFunction();
}

Functinon2::Functinon2(double _x, double _y, double _z)
{
	h = 0.1;
	aX = _x;
	bX = _x + h * 10;
	aY = _y;
	bY = _y + h * 10;
	aZ = _z;
	bZ = _z + h * 10;
	quantity = 0;
	startFunction();
}

Functinon2::~Functinon2()
{
	delete[] X, Y, Z, T;
}

void Functinon2::setData(double _x, double _y, double _z)
{
	h = 0.1;
	aX = _x;
	bX = _x + h * 10;
	aY = _y;
	bY = _y + h * 10;
	aZ = _z;
	bZ = _z + h * 10;
	quantity = 0;
}

void Functinon2::run()
{
	startFunction();
}

void Functinon2::cleanFunc()
{
	quantity = 0;
}

string Functinon2::GetMass()
{
	string str;
	char tmpStr[40] = " ";
	str = "  X       Y       Z      T(x,y,z)  \n";
	for (unsigned int i = 0; i < quantity; i++)
	{
		sprintf_s(tmpStr, "%0.4f %0.4f %0.4f %0.4f \n\0", X[i], Y[i], Z[i], T[i]);
		str += tmpStr;
	}

	return str;
}
