#include "Stroka.h"

ostream& operator<<(ostream& out, const Stroka& stroka)
{
	out << stroka.s1;
	return out;
}

Stroka::Stroka(const char* t)
{
	int i = 0;
	bool first = true;
	//s1 = new string();
	while (t[i] != '\0')
	{
		if (t[i] == ' ' && first == false)
		{
			break;
		}
		this->s1 += t[i];
		if (t[i] == ' ')
		{
			first = false;
		}
		i++;
	}
}

Stroka::Stroka(string& t)
{
	bool first = true;
	int i = 0;
	//s1 = new string();
	while (t[i] != '\0')
	{
		if (t[i] == ' ' && first == false)
		{
			break;
		}
		this->s1 += t[i];
		if (t[i] == ' ')
		{
			first = false;
		}
		i++;
	}
	/*for (int i = 0; i < f; i++)
	{
		
		if (t[i] == '\n' && first == false)
		{
			break;
		}
		this->s1 += t[i];
		if (t[i] == '\n')
		{
			first = false;
		}
		i++;
	}*/
}

void Stroka::inputData(const char* t)
{
	int i = 0;
	bool first = true;
	s1.clear();
	while (t[i] != '\0')
	{
		if (t[i] == ' ' && first == false)
		{
			break;
		}
		this->s1 += t[i];
		if (t[i] == ' ')
		{
			first = false;
		}
		i++;
	}
}
