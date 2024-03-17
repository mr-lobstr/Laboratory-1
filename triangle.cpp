#include <cmath>
using namespace std;

bool triangleEx(double sideA, double sideB, double sideC)
{

    return !(((sideA + sideB) < sideC) or ((sideA + sideC) < sideB) or ((sideB + sideC) < sideA));
}

double triangleP(double sideA, double sideB, double sideC)
{
    double P=-1;
    if (triangleEx(double sideA, double sideB, double sideC))
        cout << "Треугольник не существует" << endl;
    else
        P = sideA + sideB + sideC;
    return P;
}

bool isTriangleRavnobedr(double sideA, double sideB, double sideC)
{
        return ((sideA == sideB) or (sideA == sideC) or (sideB == sideC))
}

float triangleS(double sideA, double sideB, double sideC)
{
    double S=-1;
    if (triangleEx(double sideA, doble sideB, double sideC))
        cout << "Треугольник не существует" << endl;
    else
    {
        double p = triangleP(sideA, sideB, sideC) / 2;
        S = sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
    }
    return S;
}