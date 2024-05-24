#pragma once
#ifndef NUMBER_H
#define NUMBER_H
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

class NUMBER
{
	char strb[20];//десятичное число, заданное в виде строки 

	char stre[50];//переведенное число по указанному основанию, в виде строки 

	unsigned int osnova;//основание числа 



public://методы 

	NUMBER() {}//конструктор пустой для массива 

	NUMBER(char* n, unsigned int f);//конструктор с параметрами 

	~NUMBER() {}//деструктор 

	void Perevod();//перевод числа по основанию 

private:

	bool Analiz();//анализ правильности задания параметров:O 

	//1 - все параметры правильные, 0 - неправильные 

	//проработать диагностику 

public:

	friend void Print(NUMBER& object);//дружественная функция печати 
};

#endif // !NUMBER_H