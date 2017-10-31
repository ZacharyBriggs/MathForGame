#include "Matrix3.h"

Matrix3::Matrix3()
{
}
Matrix3::Matrix3(float mat[9])
{
	for (int i = 0; i < 9; i++)
		mMat[i] = mat[i];
}
Matrix3::Matrix3(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI)
{
	mMat[0] = indexA;
	mMat[1] = indexB;
	mMat[2] = indexC;
	mMat[3] = indexD;
	mMat[4] = indexE;
	mMat[5] = indexF;
	mMat[6] = indexG;
	mMat[7] = indexH;
	mMat[8] = indexI;
}
Matrix3 Matrix3::operator+(Matrix3 & other)
{
	Matrix3 newMat;
	for (int i = 0; i < 9; i++)
		newMat.mMat[i] = mMat[i] + other.mMat[i];
	return newMat;
}
Matrix3 Matrix3::operator-(Matrix3 & other)
{
	Matrix3 newMat;
	for (int i = 0; i < 9; i++)
		newMat.mMat[i] = mMat[i] - other.mMat[i];
	return newMat;
}
Matrix3 Matrix3::operator*(Matrix3 & other)
{
	Matrix3 newMat;
	for (int i = 0; i < 9; i++)
		newMat.mMat[i] = mMat[i] * other.mMat[i];
	return newMat;
}
Matrix3 Matrix3::operator*(int & other)
{
	Matrix3 newMat;
	for (int i = 0; i < 9; i++)
		newMat.mMat[i] = mMat[i] * other;
	return newMat;
}
std::istream & operator >> (std::istream & input, Matrix3 & other)
{
	Matrix3 newMat;
	for (int i = 0; i < 9; i++)
		input >> other.mMat[i];
	return input;
}
std::ostream & operator<<(std::ostream & output, Matrix3 & other)
{
	Matrix3 newMat;
	std::cout << std::endl << "<";
	for (int i = 0; i < 9; i++)
	{
		output << other.mMat[i] << " ";
		if (i == 2 || i == 5)
			std::cout << ">" << std::endl << "<";
	}
	std::cout << ">";
	return output;
}