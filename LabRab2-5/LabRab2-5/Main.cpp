#include "Sort.h"

int main() {
	Sort one;
	Sort two;
	Massiv* three;
	three = new Sort();
	cout << "/-----------------------One--------------------------/" << endl;
	one.show();
	cout << one.countSum() << " " << one.summ() << endl;
	one.sortMetOne();
	one.sortMetTwo();
	cout << "/-------------------------Sorted------------------------/" << endl;
	one.show();
	cout << "/----------------------------Two---------------------/" << endl;
	two.show();
	cout << two.countSum() << " " << two.summ() << endl;
	two.sortMetOne();
	two.sortMetTwo();
	cout << "/-----------------------------Sorted--------------------/" << endl;
	two.show();
	cout << "/----------------------------Three---------------------/" << endl;
	three->show();
	cout << three->countSum() << " " << static_cast<Sort*>(three)->summ() /* syntax --static_cast<derived*>base_pointer->function()-- derived function from the base class*/ << endl;
	static_cast<Sort*>(three)->sortMetOne();
	static_cast<Sort*>(three)->sortMetTwo();
	cout << "/-----------------------------Sorted--------------------/" << endl;
	three->show();
}