#include <cmath>
#include <iostream>
using namespace std;
//комментарий для проверки
bool triangleEx(double sideA, double sideB, double sideC)
{

    return !(((sideA + sideB) < sideC) or ((sideA + sideC) < sideB) or ((sideB + sideC) < sideA));
}

double triangleP(double sideA, double sideB, double sideC)
{
    double P=-1;
    if (triangleEx(sideA, sideB, sideC))
        P = sideA + sideB + sideC;
    else
        cout << "Треугольник не существует" << endl;
    return P;
}

bool isTriangleRavnobedr(double sideA, double sideB, double sideC)
{
        return ((sideA == sideB) or (sideA == sideC) or (sideB == sideC));
}

float triangleS(double sideA, double sideB, double sideC)
{
    double S=-1;
    if (triangleEx(sideA, sideB, sideC))
    {
        double p = triangleP(sideA, sideB, sideC) / 2;
        S = sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
    }
    else
    {
        cout << triangleP(sideA, sideB, sideC) / 2 << "--\n";
    }
    return S;
}