#include "Vector2.h"
#include "Vector3.h"
int main()
{
	Vector2 vecOne(4,20);
	Vector2 vecTwo(6,9);
	Vector3 vecThree(10,4,10);
	Vector3 vecFour(3,15,8);
	vecOne.Dot(vecTwo);
	vecThree.Cross(vecFour);
}