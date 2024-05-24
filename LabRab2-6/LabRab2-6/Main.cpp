#include "Fifth.h"
#include "Sixth.h"
#include <ctime>
#include <cstdlib>


int main() {
	srand(time(NULL));
	First one((rand() % 10 + 1));
	Second two((rand() % 10 + 1));
	Third three((rand() % 10 + 1));
	Fourth four((rand() % 10 + 1));
	Fifth five((rand()% 10 + 1));
	Sixth six((rand() % 10 + 1));

	printData(one);
	printData(two);
	printData(three);
	printData(four);
	printData(five);
	printData(six);
}