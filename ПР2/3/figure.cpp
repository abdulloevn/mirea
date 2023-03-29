#include "figure.h"

float figure::get_ang(float x0, float y0, float x1, float y1, float x2, float y2)
{
	//fi = arccos( (a, b) / (|a|*|b|) )

	float dirAx = x1 - x0;
	float dirAy = y1 - y0;

	float dirBx = x2 - x0;
	float dirBy = y2 - y0;

	float mA = sqrt(dirAx * dirAx + dirAy * dirAy);
	float mB = sqrt(dirBx * dirBx + dirBy * dirBy);

	float scalar = dirAx * dirBx + dirAy * dirBy;

	return acos(scalar / mA / mB);
}

figure::figure(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4)
{
	x1 = X1;
	x2 = X2;
	x3 = X3;
	x4 = X4;
	y1 = Y1;
	y2 = Y2;
	y3 = Y3;
	y4 = Y4;

	S = abs((x1 - x2)*(y1 + y2) + (x2 - x3)*(y2 + y3) + (x3 - x4)*(y3 + y4) + (x4 - x1)*(y4 + y1)) / 2;

	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	c = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
	d = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));

	d1 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	d2 = sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));

	ang1 = get_ang(x2, y2, x1, y1, x3, y3);
	ang2 = get_ang(x3, y3, x2, y2, x4, y4);
	ang3 = get_ang(x4, y4, x3, y3, x1, y1);
	ang4 = get_ang(x1, y1, x4, y4, x2, y2);

	P = a + b + c + d;
}

figure::figure() {};

void figure::show()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");

	cout << "Координаты точек:" << endl;
	cout << "(" << x1 << "; " << y1 << ")" << endl;
	cout << "(" << x2 << "; " << y2 << ")" << endl;
	cout << "(" << x3 << "; " << y3 << ")" << endl;
	cout << "(" << x4 << "; " << y4 << ")" << endl;

	cout << "Углы:" << endl;
	cout << ang1 << endl;
	cout << ang2 << endl;
	cout << ang3 << endl;
	cout << ang4 << endl;

	cout << "Длины сторон: " << a << ", " << b << ", " << c << ", " << d << endl;
	cout << "Длины диагоналей: " << d1 << ", " << d2 << endl;
	cout << "Площадь: " << S << endl;
	cout << "Периметр: " << P << endl;
}

bool figure::is_prug() 
{
	return a == c && b == d;
}
bool figure::is_square()
{
	return d1 == d2 && a == b && b == c && c == d;
}
bool figure::is_romb() 
{
	return (a == b && b == c && c == d) && d1 != d2;
}

bool figure::is_in_circle() 
{
	return ang1 == ang3 && ang2 == ang4;
}
bool figure::is_out_circle()
{
	return a + c == b + d;
}