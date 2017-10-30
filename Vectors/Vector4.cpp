#include "Vector4.h"

Vector4::Vector4()
{
}
Vector4::Vector4(float x, float y, float z,float w)
{
	mX = x;
	mY = y;
	mZ = z;
	mW = w;
}
Vector4 Vector4::operator+(Vector4 & other)
{
	Vector4 sum = { mX + other.mX, mY + other.mY,mZ + other.mZ,mW + other.mW };
	return sum;
}
Vector4 Vector4::operator-(Vector4 & other)
{
	Vector4 remainder = { mX - other.mX, mY - other.mY,mZ - other.mZ,mW - other.mW };
	return remainder;
}
Vector4 Vector4::operator*(float  other)
{
	Vector4 scaledVec = { mX*other, mY*other,mZ*other,mW*other };
	return scaledVec;
}
bool Vector4::operator==(Vector4 & other)
{
	return (mX == other.mX, mY == other.mY,mZ == other.mZ,mW == other.mW);
}
float Vector4::Dot(Vector4 & other)
{
	float product = { mX*other.mX + mY*other.mY + mZ*other.mZ + mW*other.mW};
	return product;
}
Vector4 Vector4::Normalize()
{
	float mag = Magnitude();
	Vector4 normalVector = { mX / mag,mY / mag,mZ / mag,mW / mag };
	return normalVector;
}
float Vector4::Magnitude()
{
	float mag = sqrt(mX*mX + mY*mY + mZ*mZ + mW*mW);
	return mag;
}

std::istream & operator >> (std::istream & input, Vector4 & q)
{
	input >> q.mX >> q.mY >> q.mZ >> q.mW;
	return input;
}

std::ostream & operator<<(std::ostream & output, const Vector4 & q)
{
	output << q.mX << "," << q.mY << "," << q.mZ << "," << q.mW;
	return output;
}
