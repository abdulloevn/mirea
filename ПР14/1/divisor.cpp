#include "divisor.h"

Divisor::Divisor(int X, int Y)
{
	x = X; y = Y;
	try {
		if (y == 0) throw std::runtime_error("Impossible to divide by zero.");
		res = x / y;
	}
	catch (std::runtime_error& e)
	{
		res = 0;
		std::cout << e.what() << std::endl;
	}
}

Divisor::~Divisor()
{
}

double Divisor::result()
{
	return res;
}
