#pragma once
#include <iostream>
#include <cmath>
#include <Windows.h>


class Cone
{
private:
	double x, y, z;
	double r;
	double h;
public:
	//����������� �� ���������
	Cone();
	//����������� � ������� � ������ ���������
	Cone(double R, double H);
	//��������� �����������
	Cone(double A, double B, double C, double R, double H);

	void setCoordinate(double A, double B, double C);
	void setRadius(double R);
	void setHeight(double H);
	double radius();
	double height();
	double area();
	double volume();
	
	friend std::ostream& operator<<(std::ostream& stream, Cone obj);

};