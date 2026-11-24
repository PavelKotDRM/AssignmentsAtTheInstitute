#pragma once
#ifndef STROKA_H
#define STROKA_H

#include  <string>
#include <iostream>
class Stroka
{
	char* str; //address of the dynamically allocated string

	int n;//string length

	char ch; //character

public://methods

	Stroka();//empty string

	Stroka(char* _str);

	void SetChar(char);//set character

	Stroka(const Stroka&);//copy constructor

	int GetNSTR(); //get string length

	void ClearSTR();// clear string

	~Stroka(); //destructor

	char* GetSTR();//get string address

private:

	friend void printStr(Stroka& object);   //friend function 1

	friend int findSimbol(char simbol, Stroka& object);  // friend function 2
};
#endif // !STROKA_H

