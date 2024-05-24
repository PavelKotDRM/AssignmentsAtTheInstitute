#pragma once
#include "Unite.cpp"
#include <fstream>
ref class DataSorege
{
	Unite* mass;
	unsigned int quantity = 0;
	DataSorege() {}
public:
	DataSorege(const char* _name, int _age, const char* _birthday, const char* _profession, const char* _subdivision);
	DataSorege(std::string _name, int _age, std::string _birthday, std::string _profession, std::string _subdivision);
	int getQuantity();
	Unite getUnite(int num);
	void addUnite(const char* _name, int _age, const char* _birthday, const char* _profession, const char* _subdivision);
	void addUnite(std::string _name, int _age, std::string _birthday, std::string _profession, std::string _subdivision);
	void addUnite(Unite addUnite);
	void deleteUnite(int num);
	void exportTxt();
};

