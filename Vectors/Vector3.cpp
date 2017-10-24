#include "Vector3.h"
Vector3::Vector3()
{
}
Vector3::Vector3(float x, float y,float z)
{
	mX = x;
	mY = y;
	mZ = z;
}
Vector3 Vector3::operator+(Vector3 & other)
{
	Vector3 V3 = { mX + other.mX,mY + other.mY,mZ + other.mZ };
	return V3;
}
Vector3 Vector3::operator-(Vector3 & other)
{
	Vector3 V3 = { mX - other.mX,mY - other.mY,mZ - other.mZ };
	return V3;
}
Vector3 Vector3::operator*(float other)
{
	Vector3 V3 = { mX*other,mY*other,mZ*other };
	return V3;
}