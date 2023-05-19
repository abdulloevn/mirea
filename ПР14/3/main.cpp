#include "setgetter.h"
#include <iostream>
#include <set>

int main()
{
	std::set<double> numeros;
	std::cout << "got: " << setgetter::get(numeros) << std::endl;


	numeros.insert(3);
	std::cout << "added 3;" << std::endl;
	std::cout << "got: " << setgetter::get(numeros) << std::endl;

}