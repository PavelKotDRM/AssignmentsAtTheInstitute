#include "Stroka.h"

Stroka::Stroka()
{
	str = new char[1];
	n = 1;
	ch = 0;
}

Stroka::Stroka(char* _str)
{
	unsigned int i = 0;
	while (_str[i] != '\0' /*&& _str[i] != '\n'*/)
	{
		i++;
		if (i > 200)break;
	}
	str = new char[i+1];
	std::cout << i << std::endl;
	for (unsigned int j = 0; j < i + 1; j++)
	{
		str[j] = _str[j];
	}
	n = i + 1;
	std::cout << n << std::endl;
}

void Stroka::SetChar(char simbol)
{
	char* tmp = new char[n+1];
	tmp[n] = simbol;
	if (n > 1) {
		for (unsigned int i = 0; i < n; i++)
		{
			tmp[i] = str[i];
		}
		n++;
		delete[]str;
		str = new char[n];
		for (unsigned int i = 0; i < n; i++)
		{
			str[i] = tmp[i];
		}
		//str[n] = '\0';
	}
	else {
		str = new char[1];
		str[0] = simbol;
		n++;
	}
}

Stroka::Stroka(const Stroka&)
{
	std::cout << "Copy const! " << (int)&*this << std::endl;
}

int Stroka::GetNSTR()
{
	return n;
}

void Stroka::ClearSTR()
{
	n = 1;
}

Stroka::~Stroka()
{
	delete[] str;
}

char* Stroka::GetSTR()
{
	return str;
}

void printStr(Stroka& object)
{
	std::cout << object.str[object.n-1]<< std::endl;
	std::cout << object.str << std::endl;
	std::cout << object.n << std::endl;
}

int findSimbol(char simbol, Stroka& object)
{
	unsigned int i = 0;
	while (object.str[i]!=simbol)
	{
		i++;
	}
	return i;
}
