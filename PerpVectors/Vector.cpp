#include "Vector.h"
Vector::Vector()
{
}
Vector::Vector(float x, float y)
{
	mX = x;
	mY = y;
}
float Vector::Dot(Vector other)
{
	float product =(mX * other.mX) + (mY * other.mY);
	return product;
}

float Vector::Magnitude()
{
	float mag = (mX * mX) + (mY * mY);
	mag = sqrt(mag);
	return mag;
}
Vector Vector::Normalize()
{
	Vector normalVector(mX / Magnitude(), mY / Magnitude());
	return normalVector;
}
float Vector::RadianToDegree(Vector other)
{
	float radian = Dot(other);
	int degrees = (radian * 180) / 3.14;
	return degrees;
}