#include "Bitwise.h"
Bitwise::Bitwise()
{
}
int Bitwise::AndOperator(int one, int two)
{
	return one&two;
}
int Bitwise::OrOperator(int one, int two)
{
	return one|two;
}
int	Bitwise::NotOperator(int one)
{
	return ~one;
}
int Bitwise::XOrOperator(int one, int two)
{
	return one^two;
}
int Bitwise::LeftShift(int one, int shiftAmount)
{
	return one<<shiftAmount;
}
int Bitwise::RightShift(int one, int shiftAmount)
{
	return one>>shiftAmount;
}