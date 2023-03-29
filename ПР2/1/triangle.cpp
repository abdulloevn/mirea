#include <cmath>
#include <iostream>
#include "triangle.h"

bool Triangle::exst_tr()
{
	return (a < (b + c) && b < (a + c) && c < (a + b));
}
void Triangle::set(double al, double bl, double cl)
{
	a = al, b = bl, c = cl;
}
void Triangle::show()
{
	std::cout << a << ", " << b << ", " << c << std::endl;
}
double Triangle::perimetr()
{
	return a + b + c;
}
double Triangle::square()
{
	double s = perimetr() / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}