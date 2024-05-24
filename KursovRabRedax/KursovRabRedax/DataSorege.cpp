#include "DataSorege.h"
DataSorege::DataSorege(const char* _name, const char* _surname, const char* _middle_name, const char* _position, int _phone, const char* _adress, int _pay)
{
	quantity = 1;
	mass = new Unite[quantity];
	mass[0].name = _name;
	mass[0].surname = _surname;
	mass[0].middle_name = _middle_name;
	mass[0].position = _position;
	mass[0].phone = _phone;
	mass[0].adress = _adress;
	mass[0].pay = _pay;
}

DataSorege::DataSorege(std::string _name, std::string _surname, std::string _middle_name, std::string _position, int _phone, std::string _adress, int _pay)
{
	quantity = 1;
	mass = new Unite[this->quantity];
	mass[0].name = _name;
	mass[0].surname = _surname;
	mass[0].middle_name = _middle_name;
	mass[0].position = _position;
	mass[0].phone = _phone;
	mass[0].adress = _adress;
	mass[0].pay = _pay;
}

DataSorege::~DataSorege()
{
	this->exportTxt();
	delete[] mass;
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

void DataSorege::addUnite(const char* _name, const char* _surname, const char* _middle_name, const char* _position, int _phone, const char* _adress, int _pay)
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
	mass[this->quantity - 1] = Unite(_name, _surname, _middle_name, _position, _phone, _adress, _pay);
	delete[] tmp;
}

void DataSorege::addUnite(std::string _name, std::string _surname, std::string _middle_name, std::string _position, int _phone, std::string _adress, int _pay)
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
	mass[this->quantity - 1].surname = _surname;
	mass[this->quantity - 1].middle_name = _middle_name;
	mass[this->quantity - 1].position = _position;
	mass[this->quantity - 1].phone = _phone;
	mass[this->quantity - 1].adress = _adress;
	mass[this->quantity - 1].pay = _pay;
	delete[] tmp;
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
}

void DataSorege::exportTxt()
{
	setlocale(LC_ALL, "Russian");
	outData.open("employees_bin.db", std::ios_base::binary);
	//outData << "usfgfusdgfusj";
	if (outData.is_open())
	{
		for (int i = 0; i < quantity; i++)
		{
			outData << i << ":" << mass[i].name << ";"
				<< mass[i].surname << ";"
				<< mass[i].middle_name << ";"
				<< mass[i].position << ";"
				<< mass[i].phone << ";"
				<< mass[i].adress << ";"
				<< mass[i].pay << ";";
		}
	}
	//outData << std::endl;
	outData.close();
	
}

void DataSorege::importTxt()
{
	setlocale(LC_ALL, "Russian");
	bool Data = false;
	Unite tmp;
	char t;
	inputData.open("employees_bin.db", std::ios_base::binary);
	if (inputData.is_open()) {
		while (!inputData.eof()) {
			tmp.name = "";
			tmp.surname = "";
			tmp.middle_name = "";
			tmp.position = "";
			tmp.phone = 0;
			tmp.adress = "";
			tmp.pay = 0;
			inputData.get(t);
			if (t == ':')Data = true;
			if (Data) {
				for (int i = 0; i < 7; i++)
				{
					inputData.get(t);
					if (i == 0) {
						while (t != ';')
						{
							tmp.name += t;
							inputData.get(t);
						}
					}
					if (i == 1) {
						while (t != ';')
						{
							tmp.surname += t;
							inputData.get(t);
						}
					}
					if (i == 2) {
						while (t != ';')
						{
							tmp.middle_name += t;
							inputData.get(t);
						}
					}
					if (i == 3) {
						while (t != ';')
						{
							tmp.position += t;
							inputData.get(t);
						}
					}
					if (i == 4) {
						std::string tm;
						while (t != ';')
						{
							tm += t;
							inputData.get(t);
						}
						tmp.phone = std::stoi(tm);
					}
					if (i == 5) {
						while (t != ';')
						{
							tmp.adress += t;
							inputData.get(t);
						}
					}
					if (i == 6) {
						std::string tm;
						while (t != ';')
						{
							tm += t;
							inputData.get(t);
						}
						tmp.pay = std::stoi(tm);
					}
				}
				if (this->mass != nullptr) {
					this->addUnite(tmp);
				}
				else {
					quantity = 1;
					mass = new Unite[this->quantity];
					mass[0].name = tmp.name;
					mass[0].surname = tmp.surname;
					mass[0].middle_name = tmp.middle_name;
					mass[0].position = tmp.position;
					mass[0].phone = tmp.phone;
					mass[0].adress = tmp.adress;
					mass[0].pay = tmp.pay;
				}
				Data = false;
			}
		}
	}
	else {
		quantity = 1;
		mass = new Unite[this->quantity];
	}
	inputData.close();
}
