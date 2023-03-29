#include "figure.h"
#include <iostream>

void pak()
{
	std::cout << std::endl;
	system("pause");
	system("cls");
}

int main()
{
	using namespace std;
	setlocale(LC_ALL, "ru");
	figure mas[3];

	float a, b, c, d, e, f, g, h;
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите координаты сторон многоугольника №" << i + 1 << " (x1, x2, x3, x4, y1, y2, y3, y4): ";
		cin >> a >> b >> c >> d >> e >> f >> g >> h;
		mas[i] = figure(a, b, c, d, e, f, g, h);
	}

	pak();

	cout << "1. figure::show()" << endl << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "Многоугольник №" << i+1 << endl;

		mas[i].show();
		cout << endl;

		cout << "is_prug(): " << mas[i].is_prug() << endl;
		cout << "is_square(): " << mas[i].is_square() << endl;
		cout << "is_romb(): " << mas[i].is_romb() << endl;
		cout << "is_in_circle(): " << mas[i].is_in_circle() << endl;
		cout << "is_out_circle(): " << mas[i].is_out_circle() << endl;
		cout << endl << "....." << endl << endl;
	}

	pak();
}