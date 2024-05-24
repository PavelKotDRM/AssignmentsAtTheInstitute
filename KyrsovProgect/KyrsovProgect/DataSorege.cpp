#include "DataSorege.h"



DataSorege::DataSorege(const char* _name, int _age, const char* _birthday, const char* _profession, const char* _subdivision)
{
	quantity = 1;
	mass = new Unite[quantity];
	mass[0].name = _name;
	mass[0].age = _age;
	mass[0].birthday = _birthday;
	mass[0].profession = _profession;
	mass[0].subdivision = _subdivision;
	//throw gcnew System::NotImplementedException();
}

DataSorege::DataSorege(std::string _name, int _age, std::string _birthday, std::string _profession, std::string _subdivision)
{
	quantity = 1;
	mass = new Unite[this->quantity];
	mass[0].name = _name;
	mass[0].age = _age;
	mass[0].birthday = _birthday;
	mass[0].profession = _profession;
	mass[0].subdivision = _subdivision;
	//throw gcnew System::NotImplementedException();
}

int DataSorege::getQuantity()
{
	return this->quantity;
}

Unite DataSorege::getUnite(int num)
{
	if (num <= this->quantity)
	{
		return mass[num];
	}
	else
	{
		return Unite();
	}
}

void DataSorege::addUnite(const char* _name, int _age, const char* _birthday, const char* _profession, const char* _subdivision)
{
	Unite* tmp = new Unite[this->quantity];
	for (int i = 0; i < this->quantity; i++)
	{
		tmp[i] = mass[i];
	}
	this->quantity++;
	mass = new Unite[this->quantity];
	for (int i = 0; i < this->quantity - 1; i++)
	{
		mass[i] = tmp[i];
	}
	mass[this->quantity - 1] = Unite(_name, _age, _birthday, _profession, _subdivision);
	delete[] tmp;
	//throw gcnew System::NotImplementedException();
}

void DataSorege::addUnite(std::string _name, int _age, std::string _birthday, std::string _profession, std::string _subdivision)
{
	Unite* tmp = new Unite[this->quantity];
	for (int i = 0; i < this->quantity; i++)
	{
		tmp[i] = mass[i];
	}
	this->quantity++;
	mass = new Unite[this->quantity];
	for (int i = 0; i < this->quantity - 1; i++)
	{
		mass[i] = tmp[i];
	}
	mass[this->quantity - 1] = Unite();
	mass[this->quantity - 1].name = _name;
	mass[this->quantity - 1].age = _age;
	mass[this->quantity - 1].birthday = _birthday;
	mass[this->quantity - 1].profession = _profession;
	mass[this->quantity - 1].subdivision = _subdivision;
	delete[] tmp;
	//throw gcnew System::NotImplementedException();
}

void DataSorege::addUnite(Unite addUnite)
{
	Unite* tmp = new Unite[this->quantity];
	for (int i = 0; i < this->quantity; i++)
	{
		tmp[i] = mass[i];
	}
	this->quantity++;
	mass = new Unite[this->quantity];
	for (int i = 0; i < this->quantity - 1; i++)
	{
		mass[i] = tmp[i];
	}
	mass[this->quantity - 1] = addUnite;
	delete[] tmp;
	//throw gcnew System::NotImplementedException();
}

void DataSorege::deleteUnite(int num)
{
	Unite* tmp = new Unite[this->quantity];
	int b = 0;
	for (int i = 0; i < this->quantity; i++)
	{
		if (i == num) continue;
		tmp[b] = this->mass[i];
		b++;
	}
	this->quantity--;
	this->mass = new Unite[this->quantity];
	for (int i = 0; i < this->quantity; i++)
	{
		this->mass[i] = tmp[i];
	}
	delete[] tmp;
	//throw gcnew System::NotImplementedException();
}

void DataSorege::exportTxt()
{
	throw gcnew System::NotImplementedException();
}
