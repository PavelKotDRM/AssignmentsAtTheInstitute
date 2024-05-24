#include <iostream>

#include <string>

#include <math.h>

using namespace std;

double R = 0;

double r = 0;

double a;

double b;

//Формулы описаной и вписанной окружностей квадрата

double FormulaSquareCircumscribed() {

	R = a / sqrt(2);

	return R;

}

double FormulaSquareInscribed() {

	r = a / 2;

	return r;

}

//===============================================================================================================

//Формулы описаной и вписанной окружностей Ромба

double FormulaRhombusCircumscribed() {

	return R;

}

double FormulaRhombusInscribed() {

	r = a * b / (2 * sqrt((a * a) + (b * b)));

	return r;

}

//===============================================================================================================

//Формулы описаной и вписанной окружностей прямоугольного треугольника

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

		cout << "Введите название фигуры на английском (Square - квадрат, Rhombus - ромб, Triangle - треугольник): " << endl;

		cin >> FiguraName;

		if (FiguraName == Square1 || FiguraName == Square2) {

			cout << "Введите сторону квадрата: " << endl;

			cin >> a;

		}

		else if (FiguraName == Rhombus1 || FiguraName == Rhombus2) {

			cout << "Введите большую диагональ ромба: " << endl;

			cin >> a;

			cout << "Введите меньшую диагональ ромба: " << endl;

			cin >> b;

		}

		else if (FiguraName == Triangle1 || FiguraName == Triangle2) {

			cout << "Введите первый катет прямоугольного треугольника: " << endl;

			cin >> a;

			cout << "Введите второй катет прямоугольного треугольника: " << endl;

			cin >> b;

		}

		else {

			cout << "Ошибка: название фигуры введено некорректно" << endl;

		}

	}

	void show() {

		cout << "Название фигуры: " << FiguraName << endl;

		if (FiguraName == Square1 || FiguraName == Square2) {

			cout << "Сторона квадрата: " << a << endl;

			cout << "Радиус описаной окружности: " << FormulaSquareCircumscribed() << endl;

			cout << "Радиус вписанной окружности: " << FormulaSquareInscribed() << endl;

		}

		else if (FiguraName == Rhombus1 || FiguraName == Rhombus2) {

			cout << "Большая диагональ ромба: " << a << endl;

			cout << "Меньшая диагональ ромба: " << b << endl;

			cout << "Сторона ромба: " << sqrt((a * a) + (b * b)) / 2 << endl;

			cout << "Радиус описаной окружности: " << FormulaRhombusCircumscribed() << endl;

			cout << "Радиус вписанной окружности: " << FormulaRhombusInscribed() << endl;

		}

		else if (FiguraName == Triangle1 || FiguraName == Triangle2) {

			cout << "Первый катет прямоугольного треугольника: " << a << endl;

			cout << "Второй катет прямоугольного треугольника: " << b << endl;

			cout << "Гипотенуза прямоугольного треугольника: " << sqrt((a * a) + (b * b)) << endl;

			cout << "Радиус описаной окружности: " << FormulaTriangleCircumscribed() << endl;

			cout << "Радиус вписанной окружности: " << FormulaTriangleInscribed() << endl;

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