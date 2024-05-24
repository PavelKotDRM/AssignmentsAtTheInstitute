#include <string>
#include <ctime>
struct Unite
{
	std::string name;
	int age;
	std::string birthday;
	std::string profession;
	std::string subdivision;

	Unite() {
		name = " ";
		age = 0;
		birthday = "00.00.0000";
		profession = " ";
		subdivision = " ";
	}
	Unite(const char* _name, int _age, const char* _birthday, const char* _profession, const char* _subdivision) {
		name = _name;
		age = _age;
		birthday = _birthday;
		profession = _profession;
		subdivision = _subdivision;
	}
};