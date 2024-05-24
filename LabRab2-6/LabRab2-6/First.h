#pragma once
#include <iostream>
#include <string>
using namespace std;
class First
{
	int num;
public:
	First();
	First(int _num);
	int getData();
	friend void printData(First& other);
};

