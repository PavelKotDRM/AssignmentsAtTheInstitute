#include "Work.h"

Work::Work() : Masa(), Masb()
{
	this->nw = this->nA + this->nB;
	this->work = new int[this->nw];
	for (int i = 0; i < this->nA; i++)
	{
		this->work[i] = this->massA[i];
	}
	for (int i = 0; i < this->nB; i++)
	{
		this->work[this->nA + i] = this->massB[i];
	}
}

Work::Work(int na, int nb):Masa(na),Masb(nb)
{
	this->nw = this->nA + this->nB;
	this->work = new int[this->nw];
	for (int i = 0; i < this->nA; i++)
	{
		this->work[i] = this->massA[i];
	}
	for (int i = 0; i < this->nB; i++)
	{
		this->work[this->nA + i] = this->massB[i];
	}
}

Work::Work(const Work& other)
{
	this->nw = other.nw;
	for (int i = 0; i < this->nw; i++)
	{
		this->work[i] = other.work[i];
	}
	
}

Work::~Work()
{
	delete[] work;
}

ostream& operator<<(ostream& out, const Work& object)
{
	string s1;
	s1.clear();
	for (int i = 0; i < object.nw; i++)
	{
		s1 += to_string(object.work[i]);
		s1 += " ";
		if ((i+1) % 10 == 0 ) s1+= '\n';
	}
	int minCord = 0;
	int maxCord = 1;
	int value = 99;
	for (int i = 1; i < object.nw; i++)
	{
		int minCordTmp = 0, maxCordTmp = 1;
		if (object.work[i - 1] < object.work[i]) {
			value = 0;
			minCordTmp = i - 1;
			while (object.work[i - 1] < object.work[i])
			{
				value++;
				i++;
				if (i == (object.nw - 1)) break;
			}
			maxCordTmp = i - 1;
			if (maxCord - minCord < value)
			{
				minCord = minCordTmp;
				maxCord = maxCordTmp;
			}
		}
	}
	s1 += '\n';
	for (int i = minCord; i <= maxCord; i++)
	{
		s1+= to_string(object.work[i]);
		s1 += ' ';
	}
	s1 += '\n';
	s1 += "Cord = " + to_string(minCord) + " - " + to_string(maxCord) + " value = " + to_string(maxCord - minCord + 1) + '\n';
	out << s1;
	return out;
}
