#pragma once
#ifndef NUMBER_H
#define NUMBER_H
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

class NUMBER
{
	char strb[20];//���������� �����, �������� � ���� ������ 

	char stre[50];//������������ ����� �� ���������� ���������, � ���� ������ 

	unsigned int osnova;//��������� ����� 



public://������ 

	NUMBER() {}//����������� ������ ��� ������� 

	NUMBER(char* n, unsigned int f);//����������� � ����������� 

	~NUMBER() {}//���������� 

	void Perevod();//������� ����� �� ��������� 

private:

	bool Analiz();//������ ������������ ������� ����������:O 

	//1 - ��� ��������� ����������, 0 - ������������ 

	//����������� ����������� 

public:

	friend void Print(NUMBER& object);//������������� ������� ������ 
};

#endif // !NUMBER_H