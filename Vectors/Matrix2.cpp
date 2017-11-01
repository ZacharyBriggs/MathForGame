#include "Matrix2.h"
#include <math.h>
Matrix2::Matrix2()
{
}
Matrix2::Matrix2(float mat[4])
{
	for (int i = 0; i < 4; i++)
		mMat[i] = mat[i];
}
Matrix2::Matrix2(float indexA, float indexB, float indexC, float indexD)
{
	mMat[0] = indexA;
	mMat[1] = indexB;
	mMat[2] = indexC;
	mMat[3] = indexD;
}
Matrix2 Matrix2::operator+(Matrix2 &other)
{
	Matrix2 newMat;
	for (int i = 0; i < 4; i++)
		newMat.mMat[i] = mMat[i] + other.mMat[i];
	return newMat;
}
Matrix2 Matrix2::operator-(Matrix2 &other)
{
	Matrix2 newMat;
	for (int i = 0; i < 4; i++)
		newMat.mMat[i] = mMat[i] - other.mMat[i];
	return newMat;
}
Matrix2 Matrix2::operator*(Matrix2 &other)
{
	Matrix2 newMat;
	newMat.mMat[0] = (mMat[0] * other.mMat[0]) + (mMat[1] * other.mMat[2]);
	newMat.mMat[1] = (mMat[0] * other.mMat[1]) + (mMat[1] * other.mMat[3]);
	newMat.mMat[2] = (mMat[2] * other.mMat[0]) + (mMat[3] * other.mMat[2]);
	newMat.mMat[3] = (mMat[2] * other.mMat[1]) + (mMat[3] * other.mMat[3]);
	return newMat;
}
Matrix2 Matrix2::operator*(int & other)
{
	Matrix2 newMat;
	for (int i = 0; i < 4; i++)
		newMat.mMat[i] = mMat[i] * other;
	return newMat;
}
Matrix2 Matrix2::RotateX(float angle)
{
	float rad = (angle * 3.141592) / 180;
	Matrix2* rotation = new Matrix2(cos(rad), sin(-rad), sin(rad), cos(rad));
	Matrix2 rotatedMat = *this * *rotation;
	return rotatedMat;
}
Matrix2 Matrix2::RotateY(float angle)
{
	float rad =(angle * 3.14) / 180;
	Matrix2* rotation = new Matrix2(cos(rad), sin(rad), -sin(rad), cos(rad));
	*rotation;
	return Matrix2();
}
Matrix2 Matrix2::RotateZ(float angle)
{
	return Matrix2();
}
std::istream & operator >> (std::istream & input, Matrix2 & other)
{
	Matrix2 newMat;
	for (int i = 0; i < 4; i++)
		input >> other.mMat[i];
	return input;
}
std::ostream & operator<<(std::ostream & output, Matrix2 & other)
{
	Matrix2 newMat;
	std::cout << std::endl << "<";
	for (int i = 0; i < 4; i++)
	{
		output << other.mMat[i] << " ";
		if (i == 1)
			std::cout << ">" << std::endl << "<";
	}
	std::cout << ">";
	return output;
}