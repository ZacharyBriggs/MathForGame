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
	newMat.mMat[0] = (mMat[0] * other.mMat[0]) + (mMat[1] * other.mMat[4]) + (mMat[2] * other.mMat[8]) + (mMat[3] * other.mMat[12]);
	newMat.mMat[1] = (mMat[0] * other.mMat[1]) + (mMat[1] * other.mMat[5]) + (mMat[2] * other.mMat[9]) + (mMat[3] * other.mMat[13]);
	newMat.mMat[2] = (mMat[0] * other.mMat[2]) + (mMat[1] * other.mMat[6]) + (mMat[2] * other.mMat[10]) + (mMat[3] * other.mMat[14]);
	newMat.mMat[3] = (mMat[0] * other.mMat[3]) + (mMat[1] * other.mMat[7]) + (mMat[2] * other.mMat[11]) + (mMat[3] * other.mMat[15]);

	newMat.mMat[4] = (mMat[4] * other.mMat[0]) + (mMat[5] * other.mMat[4]) + (mMat[6] * other.mMat[8]) + (mMat[7] * other.mMat[12]);
	newMat.mMat[5] = (mMat[4] * other.mMat[1]) + (mMat[5] * other.mMat[5]) + (mMat[6] * other.mMat[9]) + (mMat[7] * other.mMat[13]);
	newMat.mMat[6] = (mMat[4] * other.mMat[2]) + (mMat[5] * other.mMat[6]) + (mMat[6] * other.mMat[10]) + (mMat[7] * other.mMat[14]);
	newMat.mMat[7] = (mMat[4] * other.mMat[3]) + (mMat[5] * other.mMat[7]) + (mMat[6] * other.mMat[11]) + (mMat[7] * other.mMat[15]);

	newMat.mMat[8] = (mMat[8] * other.mMat[0]) + (mMat[9] * other.mMat[4]) + (mMat[10] * other.mMat[8]) + (mMat[11] * other.mMat[12]);
	newMat.mMat[9] = (mMat[8] * other.mMat[1]) + (mMat[9] * other.mMat[5]) + (mMat[10] * other.mMat[9]) + (mMat[11] * other.mMat[13]);
	newMat.mMat[10] = (mMat[8] * other.mMat[2]) + (mMat[9] * other.mMat[6]) + (mMat[10] * other.mMat[10]) + (mMat[11] * other.mMat[14]);
	newMat.mMat[11] = (mMat[8] * other.mMat[3]) + (mMat[9] * other.mMat[7]) + (mMat[10] * other.mMat[11]) + (mMat[11] * other.mMat[15]);

	newMat.mMat[12] = (mMat[12] * other.mMat[0]) + (mMat[13] * other.mMat[4]) + (mMat[14] * other.mMat[8]) + (mMat[15] * other.mMat[12]);
	newMat.mMat[13] = (mMat[12] * other.mMat[1]) + (mMat[13] * other.mMat[5]) + (mMat[14] * other.mMat[9]) + (mMat[15] * other.mMat[13]);
	newMat.mMat[14] = (mMat[12] * other.mMat[2]) + (mMat[13] * other.mMat[6]) + (mMat[14] * other.mMat[10]) + (mMat[15] * other.mMat[14]);
	newMat.mMat[15] = (mMat[12] * other.mMat[3]) + (mMat[13] * other.mMat[7]) + (mMat[14] * other.mMat[11]) + (mMat[15] * other.mMat[15]);
	return newMat;
}
Matrix4 Matrix4::operator*(int & other)
{
	Matrix4 newMat;
	for (int i = 0; i < 4; i++)
		newMat.mMat[i] = mMat[i] * other;
	return newMat;
}
Matrix4 Matrix4::RotateX(float angle)
{
	return Matrix4();
}
Matrix4 Matrix4::RotateY(float angle)
{
	return Matrix4();
}
Matrix4 Matrix4::RotateZ(float angle)
{
	return Matrix4();
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