#include <iostream>
#include "triangle.h"

int main()
{
	std::setlocale(LC_ALL, "Russian");

	Triangle list[3];
	double a, b, c;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Введите стороны треугольника №" << i + 1 << ": ";
		std::cin >> a >> b >> c;
		list[i].set(a, b, c);

		if (!list[i].exst_tr())
		{
			list[i].show();
			std::cout << "Ошибка: длина любой стороны должна быть меньше суммы двух других. Попробуйте ещё раз." << std::endl;
			i--;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		list[i].show();
		std::cout << "Периметр: " << list[i].perimetr() << std::endl;
		std::cout << "Площадь: " << list[i].square() << std::endl;
	}

	return 0;
}