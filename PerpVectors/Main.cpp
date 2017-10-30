#include "Vector.h"
#include <iostream>
int main()
{
	Vector vecOne(4,5);
	Vector vecTwo(5,4);
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