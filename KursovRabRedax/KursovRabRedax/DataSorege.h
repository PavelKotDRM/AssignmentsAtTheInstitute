#pragma once
#include "Unite.cpp"
#include <fstream>
class DataSorege
{
	Unite* mass;
	unsigned int quantity = 0;
	std::ofstream outData;
	std::ifstream inputData;
public:
	DataSorege() {}
	DataSorege(const char* _name, const char* _surname, const char* _middle_name, const char* _position, int _phone, const char* _adress, int _pay);
	DataSorege(std::string _name, std::string _surname, std::string _middle_name, std::string _position, int _phone, std::string _adress, int _pay);
	~DataSorege();
	int getQuantity();
	Unite getUnite(int num);
	void addUnite(const char* _name, const char* _surname, const char* _middle_name, const char* _position, int _phone, const char* _adress, int _pay);
	void addUnite(std::string _name, std::string _surname, std::string _middle_name, std::string _position, int _phone, std::string _adress, int _pay);
	void addUnite(Unite addUnite);
	void deleteUnite(int num);
	void exportTxt();
	void importTxt();
};

