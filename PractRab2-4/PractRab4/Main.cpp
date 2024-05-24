
#include "Stroka.h"

int main() {
	string s1;
	cout << " input text" << endl;
	getline(cin, s1);
	Stroka g(s1);
	cout << g << endl;
	Stroka h("first sekond thert");
	cout << h << endl;
	h.inputData("iotrtfh fidhuiyahdsa jojghsjrothjghkfg oirgfjaofk");
	cout << h << endl;
}