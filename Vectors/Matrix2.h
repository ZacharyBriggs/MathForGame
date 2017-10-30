#pragma once
#include <iostream>
class Matrix2
{
public:
	float mMat[4];
	Matrix2();
	Matrix2(float mat[4]);
	Matrix2(float indexA,float indexB,float indexC,float indexD/* float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ, float indexK, float indexL, float indexM, float indexN,float indexO,float indexP*/);
	Matrix2 operator+(Matrix2 &other);
	Matrix2 operator-(Matrix2 &other);
	Matrix2 operator*(Matrix2 &other);
	Matrix2 operator*(int &other);
	friend std::istream& operator >> (std::istream &input, Matrix2 &other);
	friend std::ostream& operator << (std::ostream &output, Matrix2 &other);
};
