#pragma once
#include "Massiv.h"
class Nechet :
	public Massiv
{
	void addInVec(int value);
public:
	int n;
	int* vec;
public:
	Nechet();
	~Nechet();
	void show();
	int summ();
};

