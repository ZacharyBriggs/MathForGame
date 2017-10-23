#pragma once
class Bitwise
{
public:
	Bitwise();
	int AndOperator(int one, int two);
	int OrOperator(int one, int two);
	int NotOperator(int one);
	int XOrOperator(int one, int two);
	int LeftShift(int one, int shiftAmount);
	int RightShift(int one, int shiftAmount);
};
