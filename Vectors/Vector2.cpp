#include "..\PerpendicularVectors\Vector2.h"
#include "Vector2.h"
#include <math.h>
Vector2::Vector2()
{
}
Vector2::Vector2(int x, int y)
{
}
Vector2::Vector2(float x, float y)
{
	mX = x;
	mY = y;
}
Vector2 Vector2::operator+(Vector2 & other)
{
	Vector2 V3 = { mX + other.mX,mY + other.mY };
	return V3;
}
Vector2 Vector2::operator-(Vector2 & other)
{
	Vector2 V3 = { mX - other.mX,mY - other.mY };
	return V3;
}
Vector2 Vector2::operator*(float other)
{
	Vector2 V3 = { mX*other,mY*other };
	return V3;
}
bool Vector2::operator==(Vector2 & other)
{
	return (mX == other.mX && mY == other.mY);
}
float Vector2::Dot(Vector2 & other)
{
	float scaler = { mX*other.mX + mY*other.mY };
	return scaler;
}
Vector2 Vector2::Normalize()
{
	float mag = Magnitude();
	Vector2 normalVector = { mX / mag,mY / mag };
	return normalVector;
}
float Vector2::Magnitude()
{
	float mag = sqrt(mX*mX+mY*mY);
	return mag;
}