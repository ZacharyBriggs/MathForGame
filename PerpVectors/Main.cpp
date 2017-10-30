#include "Vector.h"
#include <iostream>
int main()
{
	int thing[5] = { 1,2,3,4,5 };
	Vector vecOne(0,1);
	Vector vecTwo(1,0);
	vecOne = vecOne.Normalize();
	vecTwo = vecTwo.Normalize();
	int perp = vecOne.Dot(vecTwo);
	if (perp != 0)
	{
		std::cout << vecOne.RadianToDegree(vecTwo) << " degrees.\n";
		std::cout << "The vectors are not perpendicular.\n";
	}
	else
	{
		std::cout << vecOne.RadianToDegree(vecTwo) << " degrees.\n";
		std::cout << "The vectors are perpendicular.\n";
	}
	system("pause");
}