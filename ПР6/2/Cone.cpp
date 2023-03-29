#include "Cone.h"

const double pi = 3.14159265;

Cone::Cone(double A, double B, double C, double R, double H)
{
	x = A;
	y = B;
	z = C;
	r = R;
	h = H;
}

Cone::Cone(double R, double H)
{
	x = y = z = 0;
	r = R;
	h = H;
}

Cone::Cone()
{
	Cone* cone = new Cone(0, 0, 0, 0, 0);
	*this = *cone;
}

void Cone::setCoordinate(double A, double B, double C)
{
	x = A;
	y = B;
	z = C;
}

void Cone::setRadius(double R)
{
	r = R;
}
void Cone::setHeight(double H)
{
	h = H;
}

double Cone::radius()
{
	return r;
}

double Cone::height()
{
	return h;
}

double Cone::area()
{
	return pi * r * sqrt(r * r + h * h) + pi * r * r;
}

double Cone::volume()
{
	return pi * r * r * h / 3;
}

std::ostream& operator<<(std::ostream& stream, Cone obj)
{
	stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << ") ";
	stream << "r=" << obj.r << "; h=" << obj.h << "; ";
	stream << "area=" << obj.area() << "; vol=" << obj.volume();
	return stream;
}