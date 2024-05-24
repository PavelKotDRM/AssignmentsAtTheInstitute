#pragma once
#include <iostream>
#include <string>
using namespace std;
class Stroka
{
private:
	string s1;

public:
	Stroka() {
		//s1 = new string();
	};
	Stroka(const char* t);
	Stroka(string& t);
	Stroka(const Stroka& after) {
		this->s1 = after.s1;
	}
	~Stroka() {
		//delete[] s1;
	}
	void inputData(const char* t);
	friend ostream& operator << (ostream& out, const Stroka& stroka);
};

