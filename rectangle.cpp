#include <geometric_figures.h>
//изменения
double rectanglePerimeter(double sideOne, double sideTwo) {
    return (sideOne + sideTwo) * 2;
}

double rectangleArea(double sideOne, double sideTwo) {
    return sideOne * sideTwo;
}

double rectangleDiagonal(double sideOne, double sideTwo) {
    return sqrt(sideOne * sideOne + sideTwo * sideTwo);
}
