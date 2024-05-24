#include <iostream>
#include "Rational.h"
using namespace std;


void main() {
	Drob chek1 = { 10,15,false };
	Drob chek2 = { 11,20,false };
	Drob tmp;
	Rational rt(chek1, chek2);
	Rational rt1(chek2, chek1);
	tmp = rt.summ();
	cout << tmp.a << "/" << tmp.b << " zn =" << tmp.zn << endl;
	tmp = rt1.summ();
	cout << tmp.a << "/" << tmp.b << " zn =" << tmp.zn << endl;
	tmp = rt.sub();
	cout << tmp.a << "/" << tmp.b << " zn =" << tmp.zn << endl;
	tmp = rt1.sub();
	cout << tmp.a << "/" << tmp.b << " zn =" << tmp.zn << endl;
	tmp = rt.mul();
	cout << tmp.a << "/" << tmp.b << " zn =" << tmp.zn << endl;
	tmp = rt1.mul();
	cout << tmp.a << "/" << tmp.b << " zn =" << tmp.zn << endl;
	tmp = rt.div();
	cout << tmp.a << "/" << tmp.b << " zn =" << tmp.zn << endl;
	tmp = rt1.div();
	cout << tmp.a << "/" << tmp.b << " zn =" << tmp.zn << endl;

}