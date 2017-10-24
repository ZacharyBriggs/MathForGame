#include "Vector2.h"
#include "Vector3.h"
int main()
{
	Vector2 vecOne(1, 1);
	Vector2 vecTwo(2, 2);
	Vector3 vecThree(3, 3, 3);
	Vector3 vecFour(4, 4, 4);
	vecOne + vecTwo;
	vecOne - vecTwo;
	vecOne * 5;
	vecThree + vecFour;
	vecThree - vecFour;
	vecThree * 2;
}