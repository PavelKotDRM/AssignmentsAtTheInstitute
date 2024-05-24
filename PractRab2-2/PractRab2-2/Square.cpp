#include "Square.h"

Square::Square()
{
	a = 5;
	S = 0;
}

Square::Square(int _a)
{
	a = _a;
	S = 0;
}

Square::Square(const Square& Square)
{
	cout << "Copy constr!" <<  (int)&(*this) << endl;
	//конструктор копирования
}

Square::~Square()
{
	a = 0;
	S = 0;
}

void Square::setSide(int _a)
{
	a = _a;
}

Square Square::getObject()
{
	cout << "Output object!"<<  (int)&(*this) << endl;
	return (*this);
}

Square Square::getInputObject(Square m)
{
	cout << "Get and output object!" <<  (int)&(m) << endl;
	return m;
}

void Square::calculateTheArea()
{
	S = a * a;
}

string Square::inputObject(Square m)
{
	cout << "Get constr!" <<  (int)&(m) << endl;
	string str;
	str = to_string((int) &m);
	str += '\n\0';
	return str;
}

string Square::outData()
{
	string str;
	str = "a = ";
	str += to_string(a);
	str += "  ";
	str += "Acreage = ";
	str += to_string(S);
	str += "   ";
	str += to_string((int)&(*this));
	str += '\n\0';
	return str;
}
