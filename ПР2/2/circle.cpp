#include "circle.h"

circle::circle(float r, float x, float y)
{
	radius = r;
	x_center = x;
	y_center = y;
}

circle::circle()
{
	radius = 0;
	x_center = 0;
	y_center = 0;
}

void circle::set_circle(float r, float x, float y)
{
	radius = r;
	x_center = x;
	y_center = y;
}

float circle::square()
{
	return radius * radius * 3.14;
}

bool circle::triangle_around(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	float r = a * b * c / 4 / s;
	return r == radius;
}

bool circle::triangle_in(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	float r = s / p;
	return r == radius;
}

bool circle::check_circle(float r, float x_cntr, float y_cntr)
{
	float a = x_center - x_cntr;
	float b = y_center - y_cntr;
	float dist = sqrt(a * a + b * b);

	float min_r = radius > r ? radius : r;
	float max_r = radius < r ? radius : r;

	return (dist <= radius + r || abs(radius-r) == dist) && abs(radius - r) <= dist;
}