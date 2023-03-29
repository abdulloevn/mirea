#include "Cone.h"
#include <iostream>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");

	//1.
	Cone cone_hr(5, 10);
	Cone cone_arbitr(5, 11, 2, 1, 3);
	std::cout << cone_hr << std::endl;
	std::cout << cone_arbitr << std::endl;

	std::cout << std::endl;

	//2.
	int R, H, X, Y, Z;
	Cone* cone_dyn;
	std::cout << "Зададим параметры конуса (радиус, высота, координаты X Y Z):" << std::endl;
	std::cin >> R >> H >> X >> Y >> Z;
	cone_dyn = new Cone(X, Y, Z, R, H);
	std::cout << *cone_dyn << std::endl;
	cone_dyn = NULL; delete cone_dyn;

	std::cout << std::endl;

	//3.
	Cone* arr = new Cone[3]();
	int i, r, h;
	std::cout << "Зададим параметры трех конусов (радиус, высота)." << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Конус №" << i + 1 << ": ";
		std::cin >> r >> h;
		arr[i] = Cone(r, h);
	}

	for (int i = 0; i < 3; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}
