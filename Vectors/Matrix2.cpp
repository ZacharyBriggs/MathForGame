#include "Matrix2.h"

Matrix2::Matrix2()
{
}
Matrix2::Matrix2(float mat[4])
{
	for (int i = 0; i < 4; i++)
	{
		mMat[i] = mat[i];
	}
}
Matrix2::Matrix2(float indexA, float indexB, float indexC, float indexD/*float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ, float indexK, float indexL, float indexM, float indexN, float indexO, float indexP*/)
{
	mMat[0] = indexA;
	mMat[1] = indexB;
	mMat[2] = indexC;
	mMat[3] = indexD;
	/*
	mMat[4] = indexE;
	mMat[5] = indexF;
	mMat[6] = indexG;
	mMat[7] = indexH;
	mMat[8] = indexI;
	mMat[9] = indexJ;
	mMat[10] = indexK;
	mMat[11] = indexL;
	mMat[12] = indexM;
	mMat[13] = indexN;
	mMat[14] = indexO;
	mMat[15] = indexP;
	*/
}
Matrix2 Matrix2::operator+(Matrix2 &other)
{
	Matrix2 newMat;
	for (int i = 0; i < 4; i++)
	{
		newMat.mMat[i] = mMat[i] + other.mMat[i];
	}
	return newMat;
}
Matrix2 Matrix2::operator-(Matrix2 &other)
{
	Matrix2 newMat;
	for (int i = 0; i < 4; i++)
	{
		newMat.mMat[i] = mMat[i] - other.mMat[i];
	}
	return newMat;
}
Matrix2 Matrix2::operator*(Matrix2 &other)
{
	Matrix2 newMat;
	for (int i = 0; i < 4; i++)
	{
		newMat.mMat[i] = mMat[i] * other.mMat[i];
	}
	return newMat;
}
Matrix2 Matrix2::operator*(int & other)
{
	Matrix2 newMat;
	for (int i = 0; i < 4; i++)
	{
		newMat.mMat[i] = mMat[i] * other;
	}
	return newMat;
}
std::istream & operator >> (std::istream & input, Matrix2 & other)
{
	Matrix2 newMat;
	for (int i = 0; i < 4; i++)
	{
		input >> other.mMat[i];
	}
	return input;
}
std::ostream & operator<<(std::ostream & output, Matrix2 & other)
{
	Matrix2 newMat;
	for (int i = 0; i < 4; i++)
	{
		output << other.mMat[i] << ",";
	}
	return output;
}