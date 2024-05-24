#include "Triangle.h"

void Triangle::calculatePerimeter()
{
	P = a + b + c;
}

void Triangle::calculateArea()
{
	double _p = (a + b + c) / 2;
	S = sqrt(_p*(_p - a)*(_p - b)*(_p - c));
}

Triangle::Triangle()
{
	srand(time(NULL));
	Name = "Triangle";
	do
	{
		a = (double)((rand() % (100)) / 10);
		b = (double)((rand() % (100)) / 10);
		c = (double)((rand() % (100)) / 10);
	} while (a==0.0 || b==0.0 || c==0.0);
	calculatePerimeter();
	calculateArea();
}

Triangle::Triangle(const Triangle& object)//copy constructor
{
	//copy constructor
}

Triangle::Triangle(char* _name, int _a, int _b, int _c)
{
	Name = _name;
	if (_a != 0 || _b != 0 || _c != 0) {
		a = (double)_a;
		b = (double)_b;
		c = (double)_c;
		calculatePerimeter();
		calculateArea();
	}
}

Triangle::Triangle(char* _name, float _a, float _b, float _c)
{
	Name = _name;
	if (_a != 0 || _b != 0 || _c != 0) {
		a = (double)_a;
		b = (double)_b;
		c = (double)_c;
		calculatePerimeter();
		calculateArea();
	}
}

Triangle::Triangle(char* _name, double _a, double _b, double _c)
{
	Name = _name;
	if (_a != 0 || _b != 0 || _c != 0) {
		a = _a;
		b = _b;
		c = _c;
		calculatePerimeter();
		calculateArea();
	}
}

Triangle::Triangle(string _name, int _a, int _b, int _c)
{
	Name = _name;
	if (_a != 0 || _b != 0 || _c != 0) {
		a = (double)_a;
		b = (double)_b;
		c = (double)_c;
		calculatePerimeter();
		calculateArea();
	}
}

Triangle::Triangle(string _name, float _a, float _b, float _c)
{
	Name = _name;
	if (_a != 0 || _b != 0 || _c != 0) {
		a = (double)_a;
		b = (double)_b;
		c = (double)_c;
		calculatePerimeter();
		calculateArea();
	}
}

Triangle::Triangle(string _name, double _a, double _b, double _c)
{
	Name = _name;
	if (_a != 0 || _b != 0 || _c != 0) {
		a = _a;
		b = _b;
		c = _c;
		calculatePerimeter();
		calculateArea();
	}
}

string Triangle::printData()
{
	string str = "Triangle = ";
	str += Name;
	str += " ";
	str += "A = " + to_string(a) + " B = " + to_string(b) + " C = " + to_string(c) + " Perimetr = " + to_string(P) + " Area = " + to_string(S) + '\n';
	return str;
}

char* Triangle::printDataChar()
{
	char* str = new char[100];
	str[1] = ' ';
	snprintf(str, 100, "Triangle = %s A = %f B = %f C = %f Perimetr = %f Area = %0f\n\0" , Name, a, b, c, P, S);
	return str;
}
