#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
int main()
{
	Vector2 vecOne(4,20);
	Vector2 vecTwo(6,9);
	Vector3 vecThree(10,4,10);
	Vector3 vecFour(3,15,8);
	Vector4 vecFive(1, 1, 1, 1);
	Vector4 vecSix(2, 2, 2, 2);
	vecFive + vecSix;
	vecFive - vecSix;
	vecFive * 5;
	vecFive == vecSix;
}