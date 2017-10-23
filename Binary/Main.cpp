#include <iostream>
#include "Bitwise.h"
int main()
{
	Bitwise bit;
	bit.AndOperator(5, 6);
	bit.OrOperator(5, 6);
	bit.NotOperator(6);
	bit.XOrOperator(5, 6);
	bit.LeftShift(10, 2);
	bit.RightShift(10, 2);
}