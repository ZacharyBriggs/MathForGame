#include "Vector3.h"
#include <math.h>
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
bool Vector3::operator==(Vector3 & other)
{
	return (mX == other.mX && mY == other.mY && mZ == other.mZ);
}
float Vector3::Dot(Vector3 & other)
{
	float product = { mX*other.mX + mY*other.mY + mZ*other.mZ };
	return product;
}
Vector3 Vector3::Cross(Vector3 & other)
{
	Vector3 product;
	product.mX = (mY * other.mZ) - (mZ * other.mY);
	product.mY = (mZ * other.mX) - (mX * other.mZ);
	product.mZ = (mX * other.mY) - (mY * other.mX);
	return product;
}
Vector3 Vector3::Normalize()
{
	float mag = Magnitude();
	Vector3 normalVector = { mX / mag,mY / mag,mZ / mag };
	return normalVector;
}
float Vector3::Magnitude()
{
	float mag = sqrt(mX*mX + mY*mY + mZ*mZ);
	return mag;
}