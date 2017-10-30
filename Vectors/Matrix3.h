#pragma once
#include <iostream>
class Matrix3
{
	float mMat[9];
	Matrix3();
	Matrix3(float mat[9]);
	Matrix3(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI);
	Matrix3 operator+(Matrix3 &other);
	Matrix3 operator-(Matrix3 &other);
	Matrix3 operator*(Matrix3 &other);
	Matrix3 operator*(int &other);
	friend std::istream& operator >> (std::istream &input, Matrix3 &other);
	friend std::ostream& operator << (std::ostream &output, Matrix3 &other);
};
