#include <iostream>
#include "triangle.h"

int main()
{
	std::setlocale(LC_ALL, "Russian");

	Triangle list[3];
	double a, b, c;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "������� ������� ������������ �" << i + 1 << ": ";
		std::cin >> a >> b >> c;
		list[i].set(a, b, c);

		if (!list[i].exst_tr())
		{
			list[i].show();
			std::cout << "������: ����� ����� ������� ������ ���� ������ ����� ���� ������. ���������� ��� ���." << std::endl;
			i--;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		list[i].show();
		std::cout << "��������: " << list[i].perimetr() << std::endl;
		std::cout << "�������: " << list[i].square() << std::endl;
	}

	return 0;
}