#include "circle.h"
#include <iostream>

//Press any key
void pak()
{
	std::cout << std::endl;
	system("pause");
	system("cls");
}

int main()
{
	using namespace std;

	float a, b, c;
	circle mas[3];

	setlocale(LC_ALL, "Russian");

	cout << "1. Определение окружностей при помощи конструктора circle()" << endl << endl;

	cout << "Задайте параметры окружности №1 (radius, pos_x, pos_y): ";
	cin >> a >> b >> c;
	mas[0] = circle(a, b, c);

	pak();

	cout << "2. Применение float square() и void set_circle()" << endl << endl;

	cout << "Текущая площадь окружности №1: " << mas[0].square() << endl;
	cout << "Предлагаем изменить параметры первой окружности (radius, pos_x, pos_y): ";
	cin >> a >> b >> c;
	mas[0].set_circle(a, b, c);
	cout << "Теперь площадь окружности №1 равна " << mas[0].square() << endl;

	pak();

	cout << "3. Демонстрация bool triangle_round() и bool triangle_in()" << endl << endl;
	cout << "Мы собираемся проверить, возможно ли вписать/описать окружность №2, имея некоторый треугольник." << endl;

	cout << "Введите параметры окружности №2 (radius, pos_x, pos_y): ";
	cin >> a >> b >> c;
	mas[1] = circle(a, b, c);

	cout << "Введите 3 стороны треугольника: ";
	cin >> a >> b >> c;

	string answer1 = mas[1].triangle_around(a, b, c) ? "да" : "нет";
	string answer2 = mas[1].triangle_in(a, b, c) ? "да" : "нет";

	cout << "Возможно ли описать окружность?: " << answer1 << endl;
	cout << "Возможно ли вписать окружность?: " << answer2 << endl;

	pak();

	cout << "4. Демонстрация bool check_circle()" << endl << endl;
	cout << "Требуется проверить, пересекаются ли некоторые две окружности." << endl;

	cout << "Введите параметры окружности №3 (radius, pos_x, pos_y): ";
	cin >> a >> b >> c;
	mas[2] = circle(a, b, c);
	cout << "Введите данные дополнительной окружности (radius, pos_x, pos_y): ";
	cin >> a >> b >> c;

	string answer = mas[2].check_circle(a, b, c) ? "да" : "нет";

	cout << "Пересекаются ли данные окружности?:" << answer;

	pak();

	cout << "Демонстрация завершена." << endl;

	pak();





}