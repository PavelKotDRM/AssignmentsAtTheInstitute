
#include "Stroka.h"

int main() {
	Stroka str((char*)"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy\nffffff5fffffffffffffffffffffffffffffffffffgggggggggggggggggggggggggggggggggggg");
	str.SetChar('t');
	printStr(str);
	std::cout << findSimbol('5',str);
	std::cout << findSimbol('0', str);
}