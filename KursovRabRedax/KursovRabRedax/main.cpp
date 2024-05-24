#include "DataSorege.h"

DataSorege* humanResourcesDepartment;
bool inMeny = true;
HANDLE handle;
void open() {
	humanResourcesDepartment = new DataSorege;
	humanResourcesDepartment->importTxt();
}


void add() {
	std::string name;
	std::cout << "������� ��� :";
	std::cin >> name;
	system("cls");
	std::string surname;
	std::cout << "������� ������� :";
	std::cin >> surname;
	system("cls");
	std::string middle;
	std::cout << "������� �������� :";
	std::cin >> middle;
	system("cls");
	std::string position;
	std::cout << "������� ��������� :";
	std::cin >> position;
	system("cls");
	std::string phone;
	std::cout << "������� ������ �������� : ";
	std::cin >> phone;
	system("cls");
	std::string adress;
	std::cout << "������� ����� : ";
	std::cin >> adress;
	system("cls");
	std::string pay;
	std::cout << "������� �������� : ";
	std::cin >> pay;
	system("cls");
	if(humanResourcesDepartment!=nullptr)humanResourcesDepartment->addUnite(name, surname, middle, position, std::stoi(phone), adress, std::stoi(pay));
	else humanResourcesDepartment = new DataSorege(name, surname, middle, position, std::stoi(phone), adress, std::stoi(pay));
}

void all() {
	unsigned int quantity = 0;
	quantity = humanResourcesDepartment->getQuantity();
	SetConsoleTextAttribute(handle, FOREGROUND_BLUE);
	for (unsigned int i = 0; i < quantity; i++)
	{
		std::cout << i << ":" << humanResourcesDepartment->getUnite(i) << std::endl;
	}
	system("pause");
	system("cls");
}
void Name() {
	unsigned int quantity = 0;
	quantity = humanResourcesDepartment->getQuantity();
	std::string name;
	SetConsoleTextAttribute(handle, FOREGROUND_RED);
	std::cout << "������� ��� ��� ������ : " ;
	SetConsoleTextAttribute(handle, 0x0007);
	std::cin >> name;
	SetConsoleTextAttribute(handle, FOREGROUND_BLUE);
	system("cls");
	for (unsigned int i = 0; i < quantity; i++)
	{
		bool correct = true;
		Unite tmp = humanResourcesDepartment->getUnite(i);
		for (int i = 0; i < name.length(); i++)
		{
			if (name[i] != tmp.name[i])correct = false;
		}
		if (correct)
		{
			std::cout << tmp << std::endl;
		}
	}
	system("pause");
	system("cls");
}
void pos() {

}
void pay() {

}

void find() {
	std::string rej;
	SetConsoleTextAttribute(handle, FOREGROUND_RED);
	std::cout << "��� ������ - all, ��� - name, ��������� - pos, �������� - pay" << std::endl;
	SetConsoleTextAttribute(handle, 0x0007);
	std::cin >> rej;
	unsigned int sum = 0;
	for (unsigned int index = 0; index < rej.length(); index++)
		sum += rej[index];
	switch (sum)
	{
	case 313:
		system("cls");
		all();
		break;
	case 417:
		system("cls");
		Name();
		break;
	case 338:
		system("cls");
		pos();
		break;
	case 330:
		system("cls");
		pay();
		break;
	default:
		std::cout << sum;
		system("pause");
		break;
	}
}
void deliteLine() {
	SetConsoleTextAttribute(handle, FOREGROUND_RED);
	std::cout << "������� ����� ������ ��� ��������: " << std::endl;
	SetConsoleTextAttribute(handle, 0x0007);
	std::string num;
	std::cin >> num;
	unsigned int quantity = 0;
	quantity = humanResourcesDepartment->getQuantity();
	SetConsoleTextAttribute(handle, FOREGROUND_RED);
	if (std::stoi(num) < quantity) {
		std::cout << "������ : " << humanResourcesDepartment->getUnite(std::stoi(num)) << " �������..." << std::endl;
			humanResourcesDepartment->deleteUnite(std::stoi(num));
		}
	system("pause");
}


void meny() {
	std::string rej;
	SetConsoleTextAttribute(handle, FOREGROUND_RED);
	std::cout << "�������� - 1, ����� - 2, ������� - 3, ����� - 4" << std::endl;
	SetConsoleTextAttribute(handle, 0x0007);
	std::cin >> rej;
	switch (std::stoi(rej))
	{
	case 1:
		system("cls");
		add();
		break;
	case 2:
		system("cls");
		find();
		break;
	case 3:
		system("cls");
		deliteLine();
		break;
	case 4:
		system("cls");
		std::cout << "exit" << std::endl;
		inMeny = false;
		break;
	default:
		std::cout << "default" << std::endl;
		break;
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	std::string rej;
	SetConsoleTextAttribute(handle, FOREGROUND_RED);
	std::cout << "������� (��������� ���� employees_bin.db) - 1, ������� (����� ���� employees_bin.db) - 2" << std::endl;
	SetConsoleTextAttribute(handle, 0x0007);
	std::cin >> rej;
	switch (std::stoi(rej))
	{
	case 1:
		system("cls");
		open();
		break;
	case 2:
		system("cls");
		add();
		break;
	default:
		std::cout << "default" << std::endl;
		break;
	}
	while (inMeny)
	{
		meny();
	}
	humanResourcesDepartment->exportTxt();
}