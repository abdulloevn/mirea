#include <iostream>
#include "nicearray.h"

int main()
{
	std::cout << "array size: ";
	int SIZE;
	std::cin >> SIZE;
	nicearray arr(SIZE);

	std::cout << "We offer you to add 3 elements to the array." << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "[format: index number]: ";
		int idx, num;
		std::cin >> idx >> num;
		if (!arr.add(num, idx)) i--;
	}
	arr.show();
}