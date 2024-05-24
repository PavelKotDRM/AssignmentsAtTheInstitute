#include "Nraz.h"

Nraz::Nraz(int r)
{
	num = r;
}

Nraz::~Nraz()
{
}

bool Nraz::checDiz()
{
	return num<=255;
}

bool Nraz::checBitInput(unsigned int in)
{
	return in<=255;
}


void Nraz::setBit(int r)
{
	num = r;
}

void Nraz::clear()
{
	num = 0;
}

void Nraz::shiftLeft(unsigned int left)
{
	num <<= left;
}

void Nraz::shiftRight(unsigned int Right)
{
	num >>= Right;
}

void Nraz::cikleShiftLeft(unsigned int left)
{
	for (int i = 0; i < left; i++)
	{
		num <<= 1;
	}
}

void Nraz::cikleShiftRight(unsigned int Right)
{
	for (int i = 0; i < Right; i++)
	{
		num >>= 1;
	}
}

void Nraz::opAnd(unsigned int n)
{
	num&= n;
}

void Nraz::opOr(unsigned int n)
{
	num |= n;
}

void Nraz::opNotOr(unsigned int n)
{
	num ^= n;
}

void Nraz::invers()
{
	num = ~num;
}

void printN(Nraz& other)
{
	std::cout << other.num << std::endl;
}

void printN8(Nraz& other)
{
	std::bitset<8> x(other.num);
	std::cout << x << std::endl;
}
