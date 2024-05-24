#include "NUMBER.h"

NUMBER::NUMBER(char* n, unsigned int f)
{
	int i = 0;
	while (n[i]!='\0' && i!=20)
	{
		strb[i] = n[i];
		i++;
	}
	if (i != 20)strb[i] = '\0';
	osnova = f;
	Perevod();
}

void NUMBER::Perevod()
{
	int i = 0;
	int b = 0;
	int os = 2;
	int num = 0;
	if (!Analiz()) {
		return;
	}
	//int num = atoi(strb);
	while (strb[b] != '\0') {
		int osMax = os;
		int variable = 0;
		if (strb[b] >= '0' && strb[b] <= '9')
		{
			variable = (int)strb[b] - '0';
		}
		else
		{
			variable = 10 + (int)strb[b] - 'A';
		}
		switch (variable)
		{
		case 2:
			if (osMax < 3) osMax = 8;
			break;
		case 3:
			if (osMax < 4) osMax = 8;
			break;
		case 4:
			if (osMax < 5) osMax = 8;
			break;
		case 5:
			if (osMax < 6) osMax = 8;
			break;
		case 6:
			if (osMax < 7) osMax = 8;
			break;
		case 7:
			if (osMax < 8) osMax = 8;
			break;
		case 8:
			if (osMax < 9) osMax = 10;
			break;
		case 9:
			if (osMax < 10) osMax = 10;
			break;
		case 10:
			if (osMax < 11) osMax = 16;
			break;
		case 11:
			if (osMax < 12) osMax = 16;
			break;
		case 12:
			if (osMax < 13) osMax = 16;
			break;
		case 14:
			if (osMax < 15) osMax = 16;
			break;
		case 15:
			if (osMax < 16) osMax = 16;
			break;
		default:
			break;
		}
		os = osMax;
		b++;
	}
	if (os<11)
	{
		int y = 0;
		for (b = b; b != 0; b--)
		{
			num = num + pow(os, y) * ((int)strb[b-1] - '0');
			y++;
		}
	}
	else {
		int y = 0;
		for (b = b; b != 0; b--)
		{
			if (strb[b-1] >= '0' && strb[b-1] <= '9') num = num + pow(os, y) * ((int)strb[b-1] - '0');
			else num = num + pow(os, y) * (10 + (int)strb[b-1] - 'A');
			y++;
		}
	}

	
	//int num = atoi(strb);
	while (num >= osnova)
	{
		if (num % osnova > 9)stre[i] = (char)(64 + ((num % osnova) - 9));
		else stre[i] = (char)'0'+(num % osnova);
		num = num / osnova;
		i++;
	}
	if (num > 9)stre[i] = (char)(64 + (num - 9));
	else stre[i] = (char)'0' + num;
	stre[i+1] = '\0';
	b = 0;
	while(b < i)
	{
		char tmp = stre[b];
		stre[b] = stre[i];
		stre[i] = tmp;
		i--;
		b++;

	}
}

bool NUMBER::Analiz()
{
	if (osnova == 0) {
		sprintf_s(stre, "Wrong data: base\0");
		return false;
	}
	int i = 0;
	while (strb[i]!='\0')
	{
		if ((strb[i] < '0' || strb[i] > '9') && (strb[i] < 'A' || strb[i] > 'F')) {
			sprintf_s(stre, "Wrong data: numeral\0");
			return false;
		}
		i++;
	}
	return true;
}

void Print(NUMBER& object)
{
	cout << "Input num = " << object.strb << ", f = " << object.osnova << endl << " out put = " << object.stre << endl;
}
