#pragma once
#include <iostream>

class Vector2D
{
public:
	float x;
	float y;

	Vector2D();
	Vector2D(float x, float y);

	Vector2D& Add(Vector2D& vec);
	Vector2D& Subtract(Vector2D& vec);
	Vector2D& Multiply(Vector2D& vec);
	Vector2D& Divide(Vector2D& vec);

	friend Vector2D& operator+(Vector2D& v1, Vector2D& v2);
	friend Vector2D& operator-(Vector2D& v1, Vector2D& v2);
	friend Vector2D& operator*(Vector2D& v1, Vector2D& v2);
	friend Vector2D& operator/(Vector2D& v1, Vector2D& v2);

	Vector2D& operator+=(Vector2D& vec);
	Vector2D& operator-=(Vector2D& vec);
	Vector2D& operator*=(Vector2D& vec);
	Vector2D& operator/=(Vector2D& vec);

	Vector2D& operator*(int& i);

	friend std::ostream& operator<<(std::ostream& stream, Vector2D& vec);
};