#include "Frustum.h"

const double pi = 3.14159265;

Frustum::Frustum(double A, double B, double C, double R1, double R2, double H)
{
	x = A; y = B; z = C;
	r = R1; r2 = R2; h = H;
}

Frustum::Frustum(double R1, double R2, double H)
{
	x = y = z = 0;
	r = R1; r2 = R2; h = H;
}

Frustum::Frustum()
{
	Frustum* frustum = new Frustum(0, 0, 0, 0, 0, 0);
	*this = *frustum;
}

Frustum::Frustum(Cone& cone, double R2):Cone(cone)
{
	r2 = R2;
}

void Frustum::setRadius2(double R2)
{
	r2 = R2;
}

double Frustum::radius2()
{
	return r2;
}

double Frustum::area()
{
	double M = sqrt(pow(r - r2, 2) + h * h);
	return pi * (r * r + (r + r2) * M + r2 * r2);
}

double Frustum::volume()
{
	double M = sqrt(pow(r - r2, 2) + h * h);
	return pi * h * (r * r + r * r2 + r2 * r2)/3;
}

bool Frustum::operator >(Frustum& Frustum2) { return volume() > Frustum2.volume(); }
bool Frustum::operator <(Frustum& Frustum2) { return volume() < Frustum2.volume(); }
bool Frustum::operator >=(Frustum& Frustum2) { return volume() >= Frustum2.volume(); }
bool Frustum::operator <=(Frustum& Frustum2) { return volume() <= Frustum2.volume(); }
bool Frustum::operator ==(Frustum& Frustum2) { return volume() == Frustum2.volume(); }

std::ostream& operator<<(std::ostream& stream, Frustum& obj)
{
	stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << ") ";
	stream << "r1=" << obj.r << "; r2=" << obj.r2 << "; h=" << obj.h << "; ";
	stream << "area=" << obj.area() << "; vol=" << obj.volume();
	return stream;
}

std::istream& operator>>(std::istream& in, Frustum& obj)
{
	in >> obj.r >> obj.r2 >> obj.h;
	return in;
}