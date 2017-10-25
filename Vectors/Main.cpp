#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include <assert.h>
int main()
{
	Vector2 vecOne(4, 20);
	Vector2 vecTwo(6, 9);
	Vector3 vecThree(10, 4, 10);
	Vector3 vecFour(3, 15, 8);
	Vector4 vecFive(1, 1, 1, 1);
	Vector4 vecSix(2, 2, 2, 2);
	assert(vecOne + vecTwo == Vector2(10,29));
	assert(vecOne - vecTwo == Vector2(-2,11));
	assert((vecOne * 5) == Vector2(20,100));
	assert(vecOne == vecTwo == false);
	assert(vecOne.Dot(vecTwo) == 204);
	assert(vecOne.Normalize() == Vector2(0.196116135,0.980580688));
	assert(vecOne.Magnitude() == 20.3960781f);
	assert(vecThree + vecFour == Vector3(13, 19, 18));
	assert(vecThree - vecFour == Vector3(7, -11, 2));
	assert((vecThree * 5) == Vector3(50, 20, 50));
	assert(vecThree == vecFour == false);
	assert(vecThree.Dot(vecFour) == 170);
	assert(vecThree.Cross(vecFour) == Vector3(-118,-50,138));
	assert(vecThree.Normalize() == Vector3(0.680413842,0.272165537,0.680413842));
	assert(vecThree.Magnitude() == 14.6969385f);
	assert(vecFive + vecSix == Vector4(3,3,3,3));
	assert(vecFive - vecSix == Vector4(-1,-1,-1,-1));
	assert(vecFive * 5 == Vector4(5,5,5,5));
	assert(vecFive == vecSix == false);
	assert(vecFive.Dot(vecSix) == 8);
	assert(vecFive.Normalize() == Vector4(0.5,0.5,0.5,0.5));
	assert(vecFive.Magnitude() == 2);
}