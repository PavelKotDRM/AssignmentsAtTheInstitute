#include <Windows.h>
#include <iostream>
#include <string>
#include <ctime>
struct Unite
{
	std::string name;
	std::string surname;
	std::string middle_name;
	std::string position;
	int phone;
	std::string adress;
	int pay;

	Unite() {
		name = "";
		surname = "";
		middle_name = "";
		position = "";
		phone = 0;
		adress = "";
		pay = 0;
	}
	Unite(const char* _name, const char* _surname, const char* _middle_name, const char* _position, int _phone, const char* _adress, int _pay) {
		name = _name;
		surname = _surname;
		middle_name = _middle_name;
		position = _position;
		phone = _phone;
		adress = _adress;
		pay = _pay;
	}
	Unite(std::string _name, std::string _surname, std::string _middle_name, std::string _position, int _phone, std::string _adress, int _pay) {
		name = _name;
		surname = _surname;
		middle_name = _middle_name;
		position = _position;
		phone = _phone;
		adress = _adress;
		pay = _pay;
	}
	friend std::ostream& operator<< (std::ostream& out, const Unite& point) {
		//printf("%s %s %s %s %d %s %d", name, surname, middle_name, position, phone, adress, pay);
		out << point.name << " " << point.middle_name << " " << point.position << " " << point.phone << " " << point.adress << " " << point.pay;
		return out;
	}
};