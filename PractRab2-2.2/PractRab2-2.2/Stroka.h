#pragma once
#ifndef STROKA_H
#define STROKA_H

#include  <string>
#include <iostream>
class Stroka
{
	char* str; //����� ������������ ������ 

	int n;//����� ������ 

	char ch; //������ 

public://������ 

	Stroka();//������ ������ 

	Stroka(char* _str);

	void SetChar(char);//��������� ������� 

	Stroka(const Stroka&);//����������� ����������� 

	int GetNSTR(); //��������� ����� ������ 

	void ClearSTR();// ������� ������ 

	~Stroka(); //����������  

	char* GetSTR();//��������� ������ ������  

private:

	friend void printStr(Stroka& object);   //������������� ������� 1 

	friend int findSimbol(char simbol, Stroka& object);  // ������������� ������� 2 
};
#endif // !STROKA_H

