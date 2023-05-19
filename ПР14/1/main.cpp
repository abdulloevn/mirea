#include <iostream>
#include "divisor.h"

int main()
{
	double x, y, z;
	std::cin >> x >> y;
	
	z = Divisor(x, y).result();
	std::cout << "Result: " << z << std::endl;
}