#include <cmath>

//	Периметр длина средней линии и площадь трапеции

double trapezoidPerimeter (double topBase, double bottomBase, double leftRib, double rightRib);

double trapezoidMiddleLine(double topBase, double bottomBase, double leftRib, double rightRib);

double trapezoidArea (double topBase, double bottomBase, double leftRib, double rightRib);

//Периметр, площадь и диагональ прямоугольника

double rectanglePerimeter(double sideOne, double sideTwo);

double rectangleArea(double sideOne, double sideTwo);

double rectangleDiagonal(double sideOne, double sideTwo);

//Периметр, площадь, существование и вид треугольника

bool triangleEx(double sideA, double sideB, double sideC);

double triangleP(double sideA, double sideB, double sideC);

bool isTriangleRavnobedr(double sideA, double sideB, double sideC);

float triangleS(double sideA, double sideB, double sideC);