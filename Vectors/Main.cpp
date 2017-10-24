#include "Vector2.h"
#include "Vector3.h"
int main()
{
	Vector2 vecOne(4,20);
	Vector2 vecTwo(2, 2);
	Vector3 vecThree(3, 3, 3);
	Vector3 vecFour(4, 5, 6);
	vecOne.Normalise();
	vecFour.Normalise();
}