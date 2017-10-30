#pragma once
#include <math.h>
class Vector
{
public:
	float mX;
	float mY;
	Vector();
	Vector(float x, float y);
	float Dot(Vector);
	float Magnitude();
	Vector Normalize();
	float RadianToDegree(Vector other);
};