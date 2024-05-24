#include <iostream>

#include <string>

#include <math.h>

using namespace std;

double R = 0;

double r = 0;

double a;

double b;

//������� �������� � ��������� ����������� ��������

double FormulaSquareCircumscribed() {

	R = a / sqrt(2);

	return R;

}

double FormulaSquareInscribed() {

	r = a / 2;

	return r;

}

//===============================================================================================================

//������� �������� � ��������� ����������� �����

double FormulaRhombusCircumscribed() {

	return R;

}

double FormulaRhombusInscribed() {

	r = a * b / (2 * sqrt((a * a) + (b * b)));

	return r;

}

//===============================================================================================================

//������� �������� � ��������� ����������� �������������� ������������

double FormulaTriangleCircumscribed() {

	R = sqrt((a * a) + (b * b)) / 2;

	return R;

}

double FormulaTriangleInscribed() {

	double p = 0;

	p = (a + b + (sqrt((a * a) + (b * b)))) / 2;

	r = sqrt(((p - a) * (p - b) * (p - (sqrt((a * a) + (b * b))))) / p);

	return r;

}

class FIGURA {

private:

	string Square1 = "Square";

	string Square2 = "square";

	string Rhombus1 = "Rhombus";

	string Rhombus2 = "rhombus";

	string Triangle1 = "Triangle";

	string Triangle2 = "triangle";

	char FiguraName[15] = "";

public:

	void set() {

		cout << "������� �������� ������ �� ���������� (Square - �������, Rhombus - ����, Triangle - �����������): " << endl;

		cin >> FiguraName;

		if (FiguraName == Square1 || FiguraName == Square2) {

			cout << "������� ������� ��������: " << endl;

			cin >> a;

		}

		else if (FiguraName == Rhombus1 || FiguraName == Rhombus2) {

			cout << "������� ������� ��������� �����: " << endl;

			cin >> a;

			cout << "������� ������� ��������� �����: " << endl;

			cin >> b;

		}

		else if (FiguraName == Triangle1 || FiguraName == Triangle2) {

			cout << "������� ������ ����� �������������� ������������: " << endl;

			cin >> a;

			cout << "������� ������ ����� �������������� ������������: " << endl;

			cin >> b;

		}

		else {

			cout << "������: �������� ������ ������� �����������" << endl;

		}

	}

	void show() {

		cout << "�������� ������: " << FiguraName << endl;

		if (FiguraName == Square1 || FiguraName == Square2) {

			cout << "������� ��������: " << a << endl;

			cout << "������ �������� ����������: " << FormulaSquareCircumscribed() << endl;

			cout << "������ ��������� ����������: " << FormulaSquareInscribed() << endl;

		}

		else if (FiguraName == Rhombus1 || FiguraName == Rhombus2) {

			cout << "������� ��������� �����: " << a << endl;

			cout << "������� ��������� �����: " << b << endl;

			cout << "������� �����: " << sqrt((a * a) + (b * b)) / 2 << endl;

			cout << "������ �������� ����������: " << FormulaRhombusCircumscribed() << endl;

			cout << "������ ��������� ����������: " << FormulaRhombusInscribed() << endl;

		}

		else if (FiguraName == Triangle1 || FiguraName == Triangle2) {

			cout << "������ ����� �������������� ������������: " << a << endl;

			cout << "������ ����� �������������� ������������: " << b << endl;

			cout << "���������� �������������� ������������: " << sqrt((a * a) + (b * b)) << endl;

			cout << "������ �������� ����������: " << FormulaTriangleCircumscribed() << endl;

			cout << "������ ��������� ����������: " << FormulaTriangleInscribed() << endl;

		}

	}

};

int main() {

	setlocale(0, "");

	FIGURA figura;

	figura.set();

	figura.show();

	system("pause");

	return 0;

}