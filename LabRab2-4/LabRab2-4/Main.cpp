
#include <cstdlib>
#include <ctime>
#include "Nraz.h"


int main(void) {
	srand(time(nullptr));
	int massiv[20];
	for (int i = 0; i < 20; i++)
	{
		massiv[i] = rand() % 256;
	}
	Nraz test(massiv[0]);
	std::cout << "Bit   7  6  5  4    3  2  1  0   16-код     10-код" << std::endl;
	for (int i = 1; i < 20; i++)
	{
		std::cout << "------------------" << i << "--------------------" << std::endl;
		printN8(test);
		printN(test);
		test.cikleShiftLeft(i);
		printN8(test);
		printN(test);
		test.cikleShiftRight(i);
		printN8(test);
		printN(test);
		test.shiftLeft(i);
		printN8(test);
		printN(test);
		test.shiftRight(i);
		printN8(test);
		printN(test);
		test.invers();
		printN8(test);
		printN(test);
		test.opAnd(i);
		printN8(test);
		printN(test);
		test.opNotOr(i);
		printN8(test);
		printN(test);
		test.opOr(i);
		printN8(test);
		printN(test);
		test.setBit(massiv[i]);
	}
}