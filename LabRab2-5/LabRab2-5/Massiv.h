#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
const int N = 50;
class Massiv
{
public:
	int mass[N];

public:
	Massiv();
	~Massiv();
//protected:
	int countSum();
	void show();

};

