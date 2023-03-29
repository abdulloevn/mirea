#pragma once
#include "Cone.h"

class Frustum : virtual public Cone
{
protected:
	double r2;
public:
	Frustum();
	Frustum(double R1, double R2, double H);
	Frustum(double A, double B, double C, double R1, double R2, double H);
	Frustum(Cone& cone, double R2);

	void setRadius2(double R2);
	double radius2();
	double area();
	double volume();

	bool operator >(Frustum& Frustum2);
	bool operator <(Frustum& Frustum2);
	bool operator >=(Frustum& Frustum2);
	bool operator <=(Frustum& Frustum2);
	bool operator ==(Frustum& Frustum2);

	friend std::ostream& operator<<(std::ostream& stream, Frustum& obj);
	friend std::istream& operator>>(std::istream& stream, Frustum& obj);
};