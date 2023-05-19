#pragma once
#include <iostream>
#include <stdexcept>

class Divisor
{
	double x, y;
	double res;
public:
	Divisor(int X, int Y);
	~Divisor();
	double result();
};