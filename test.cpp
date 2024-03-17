#include <iostream>
using namespace std;

#include "geometric_figures.h"

int main()
{
	// вычисление параметров трапеции 
	cout << "трапеция (1.5, 8, 3, 4):" << endl;
	cout << "\tпериметр: " << trapezoidPerimeter (1.5, 8, 3, 4) << endl;
	cout << "\tдлина средней линии: " << trapezoidMiddleLine (1.5, 8, 3, 4) << endl;
	cout << "\tплощадь: " << trapezoidArea (1.5, 8, 3, 4) << endl;

	//Вывод прямоугольника
	cout << "The perimeter of the rectangle is equal to: " << rectanglePerimeter(5, 8);
	cout << endl;
	cout << "The area of the rectangle is equal to: " << rectangleArea(5, 8);
	cout << endl;
	cout << "The diagonal of the rectangle is equal to: " << rectangleDiagonal(5, 8);

	//Вывод треугольника
	double sideA, sideB, sideC;
	cin >> sideA >> sideB >> sideC;
	cout << triangleEx(sideA, sideB, sideC) << endl
		<< triangleP(sideA, sideB, sideC) << endl
		<< isTriangleRavnobedr(sideA, sideB, sideC) << endl
		<< triangleS(sideA, sideB, sideC);
}
