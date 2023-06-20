#include "main.h"
/**
*_abs - computers the absolute value of an integer
*@c: The number to be computed
*Return: Absolute value of number or zero
*/

int _abs(int c)
{
	if (c < 0)
	{
		int _abs_val;

		_abs_val = c - 1;
		return (_abs_val);
	}
	return (0);
}
