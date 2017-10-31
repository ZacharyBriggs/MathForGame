#include "Matrix2.h"
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
	for (int i = 0; i < 4; i++)
		newMat.mMat[i] = mMat[i] * other.mMat[i];
	return newMat;
}
Matrix2 Matrix2::operator*(int & other)
{
	Matrix2 newMat;
	for (int i = 0; i < 4; i++)
		newMat.mMat[i] = mMat[i] * other;
	return newMat;
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