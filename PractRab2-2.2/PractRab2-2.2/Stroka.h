#pragma once
#ifndef STROKA_H
#define STROKA_H

#include  <string>
#include <iostream>
class Stroka
{
	char* str; //адрес динамической строки 

	int n;//длина строки 

	char ch; //символ 

public://методы 

	Stroka();//пустая строка 

	Stroka(char* _str);

	void SetChar(char);//установка символа 

	Stroka(const Stroka&);//конструктор копирования 

	int GetNSTR(); //получение длины строки 

	void ClearSTR();// очистка строки 

	~Stroka(); //деструктор  

	char* GetSTR();//получение адреса строки  

private:

	friend void printStr(Stroka& object);   //дружественная функция 1 

	friend int findSimbol(char simbol, Stroka& object);  // дружественная функция 2 
};
#endif // !STROKA_H

