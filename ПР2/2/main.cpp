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

	cout << "1. ����������� ����������� ��� ������ ������������ circle()" << endl << endl;

	cout << "������� ��������� ���������� �1 (radius, pos_x, pos_y): ";
	cin >> a >> b >> c;
	mas[0] = circle(a, b, c);

	pak();

	cout << "2. ���������� float square() � void set_circle()" << endl << endl;

	cout << "������� ������� ���������� �1: " << mas[0].square() << endl;
	cout << "���������� �������� ��������� ������ ���������� (radius, pos_x, pos_y): ";
	cin >> a >> b >> c;
	mas[0].set_circle(a, b, c);
	cout << "������ ������� ���������� �1 ����� " << mas[0].square() << endl;

	pak();

	cout << "3. ������������ bool triangle_round() � bool triangle_in()" << endl << endl;
	cout << "�� ���������� ���������, �������� �� �������/������� ���������� �2, ���� ��������� �����������." << endl;

	cout << "������� ��������� ���������� �2 (radius, pos_x, pos_y): ";
	cin >> a >> b >> c;
	mas[1] = circle(a, b, c);

	cout << "������� 3 ������� ������������: ";
	cin >> a >> b >> c;

	string answer1 = mas[1].triangle_around(a, b, c) ? "��" : "���";
	string answer2 = mas[1].triangle_in(a, b, c) ? "��" : "���";

	cout << "�������� �� ������� ����������?: " << answer1 << endl;
	cout << "�������� �� ������� ����������?: " << answer2 << endl;

	pak();

	cout << "4. ������������ bool check_circle()" << endl << endl;
	cout << "��������� ���������, ������������ �� ��������� ��� ����������." << endl;

	cout << "������� ��������� ���������� �3 (radius, pos_x, pos_y): ";
	cin >> a >> b >> c;
	mas[2] = circle(a, b, c);
	cout << "������� ������ �������������� ���������� (radius, pos_x, pos_y): ";
	cin >> a >> b >> c;

	string answer = mas[2].check_circle(a, b, c) ? "��" : "���";

	cout << "������������ �� ������ ����������?:" << answer;

	pak();

	cout << "������������ ���������." << endl;

	pak();





}