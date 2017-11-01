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
	newMat.mMat[0] = (mMat[0] * other.mMat[0]) + (mMat[1] * other.mMat[3]) + (mMat[2] * other.mMat[6]);
	newMat.mMat[1] = (mMat[0] * other.mMat[1]) + (mMat[1] * other.mMat[4]) + (mMat[2] * other.mMat[7]);
	newMat.mMat[2] = (mMat[0] * other.mMat[2]) + (mMat[1] * other.mMat[5]) + (mMat[2] * other.mMat[8]);
	newMat.mMat[3] = (mMat[3] * other.mMat[0]) + (mMat[4] * other.mMat[3]) + (mMat[5] * other.mMat[6]);
	newMat.mMat[4] = (mMat[3] * other.mMat[1]) + (mMat[4] * other.mMat[4]) + (mMat[5] * other.mMat[7]);
	newMat.mMat[5] = (mMat[3] * other.mMat[2]) + (mMat[4] * other.mMat[5]) + (mMat[5] * other.mMat[8]);
	newMat.mMat[6] = (mMat[6] * other.mMat[0]) + (mMat[7] * other.mMat[3]) + (mMat[8] * other.mMat[6]);
	newMat.mMat[7] = (mMat[6] * other.mMat[1]) + (mMat[7] * other.mMat[4]) + (mMat[8] * other.mMat[7]);
	newMat.mMat[8] = (mMat[6] * other.mMat[2]) + (mMat[7] * other.mMat[5]) + (mMat[8] * other.mMat[8]);
	return newMat;
}
Matrix3 Matrix3::operator*(int & other)
{
	Matrix3 newMat;
	for (int i = 0; i < 9; i++)
		newMat.mMat[i] = mMat[i] * other;
	return newMat;
}
Matrix3 Matrix3::RotateX(float angle)
{
	return Matrix3();
}
Matrix3 Matrix3::RotateY(float angle)
{
	return Matrix3();
}
Matrix3 Matrix3::RotateZ(float angle)
{
	return Matrix3();
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