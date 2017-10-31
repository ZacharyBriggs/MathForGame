#include "Matrix4.h"

Matrix4::Matrix4()
{
}

Matrix4::Matrix4(float mat[16])
{
	for (int i = 0; i < 16; i++)
		mMat[i] = mat[i];
}
Matrix4::Matrix4(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ, float indexK, float indexL, float indexM, float indexN, float indexO, float indexP)
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
	mMat[9] = indexJ;
	mMat[10] = indexK;
	mMat[11] = indexL;
	mMat[12] = indexM;
	mMat[13] = indexN;
	mMat[14] = indexO;
	mMat[15] = indexP;
}

Matrix4 Matrix4::operator+(Matrix4 & other)
{
	Matrix4 newMat;
	for (int i = 0; i < 16; i++)
		newMat.mMat[i] = mMat[i] + other.mMat[i];
	return newMat;
}

Matrix4 Matrix4::operator-(Matrix4 & other)
{
	Matrix4 newMat;
	for (int i = 0; i < 16; i++)
		newMat.mMat[i] = mMat[i] - other.mMat[i];
	return newMat;
}

Matrix4 Matrix4::operator*(Matrix4 & other)
{
	Matrix4 newMat;
	for (int i = 0; i < 16; i++)
		newMat.mMat[i] = mMat[i] * other.mMat[i];
	return newMat;
}

Matrix4 Matrix4::operator*(int & other)
{
	Matrix4 newMat;
	for (int i = 0; i < 4; i++)
		newMat.mMat[i] = mMat[i] * other;
	return newMat;
}

std::istream & operator >> (std::istream & input, Matrix4 & other)
{
	Matrix4 newMat;
	for (int i = 0; i < 16; i++)
		input >> other.mMat[i];
	return input;
}

std::ostream & operator<<(std::ostream & output, Matrix4 & other)
{
	Matrix4 newMat;
	std::cout << std::endl << "<";
	for (int i = 0; i < 16; i++)
	{
		output << other.mMat[i] << " ";
		if (i == 3 || i == 7 || i == 11)
			std::cout << ">" << std::endl << "<";
	}
	std::cout << ">";
	return output;
}