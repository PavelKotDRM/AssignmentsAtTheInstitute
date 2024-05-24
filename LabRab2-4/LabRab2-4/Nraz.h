#pragma once
#include <iostream>
#include <bitset>
class Nraz
{
	unsigned int num;
	unsigned int* array;
public:
	Nraz(int r);
	~Nraz();
	bool checDiz();
	bool checBitInput(unsigned int in);
	void setBit(int r);
	void clear();
	void shiftLeft(unsigned int left);
	void shiftRight(unsigned int Right);
	void cikleShiftLeft(unsigned int left);
	void cikleShiftRight(unsigned int Right);
	void opAnd(unsigned int n);
	void opOr(unsigned int n);
	void opNotOr(unsigned int n);
	void invers();
	friend void printN(Nraz&other);
	friend void printN8(Nraz& other);
};

