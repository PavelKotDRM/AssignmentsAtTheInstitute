#include <cstdlib>
#include <ctime>
#include "Y.h"


int main() {
	//A
	srand(time(NULL));
	Y object(rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1);/* синтаксис --static_cast<потомок*>(указатель_родителя)->функция()-- функция потомка из базового класса*/
	X tmp = object;
	print(tmp);
	print(object);
	std::cout << object.run() << std::endl;
	std::cout << "------------------------------------A2----------------------------------------" << std::endl;
	int* i = new int[3] { rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1 };
	object.setData(i);
	tmp = object;
	print(tmp);
	print(object);
	std::cout << object.run() << std::endl;
	std::cout << "---------------------------------------------------------------------------A-end" << std::endl;
	std::cout << "------------------------------------B----------------------------------------" << std::endl;
	//srand(time(NULL));
	Y* object2;
	object2 = new Y(rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1);
	tmp = *object2;
	print(tmp);
	print(*object2);
	std::cout << object2->run() << std::endl;
	std::cout << "------------------------------------B2----------------------------------------" << std::endl;
	i = new int[3]{ rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1 };
	object2->setData(i);
	tmp = *object2;
	print(tmp);
	print(*object2);
	std::cout << object2->run() << std::endl;
	std::cout << "------------------------------------B2end----------------------------------------" << std::endl;
	std::cout << "------------------------------------D--------------------------------------------" << std::endl;
	X* object3 = new Y(rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1);
	print(*object3);
	object2 = static_cast<Y*>(object3);
	print(*object2);
	std::cout << object2->run() << std::endl;
	std::cout << "------------------------------------D--------------------------------------------" << std::endl;
	std::cout << "------------------------------------G----------------------------------------" << std::endl;
	Y object4(rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1);/* синтаксис --static_cast<потомок*>(указатель_родителя)->функция()-- функция потомка из базового класса*/
	X tmp2 = object;
	print(tmp);
	print(object);
	std::cout << object.run() << std::endl;
	std::cout << "------------------------------------A3----------------------------------------" << std::endl;
	i = new int[3]{ rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1 };
	setDataFY(i, object);
	tmp = object;
	print(tmp);
	print(object);
	std::cout << object.run() << std::endl;
	std::cout << "---------------------------------------------------------------------------A-end" << std::endl;
	std::cout << "------------------------------------B3----------------------------------------" << std::endl;
	//srand(time(NULL));
	object2 = new Y(rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1);
	tmp = *object2;
	print(tmp);
	print(*object2);
	std::cout << object2->run() << std::endl;
	std::cout << "------------------------------------B4----------------------------------------" << std::endl;
	i = new int[3]{ rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1 };
	setDataFY(i, *object2);
	tmp = *object2;
	print(tmp);
	print(*object2);
	std::cout << object2->run() << std::endl;
	std::cout << "------------------------------------B4end----------------------------------------" << std::endl;
	std::cout << "------------------------------------D2--------------------------------------------" << std::endl;
	object3 = new Y(rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1);
	print(*object3);
	object2 = static_cast<Y*>(object3);
	print(*object2);
	std::cout << object2->run() << std::endl;
	std::cout << "------------------------------------D2end-----------------------------------------" << std::endl;

}