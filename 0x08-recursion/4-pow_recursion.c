#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x raised to the power of y
 * @x: arg1 which is base
 * @y: arg2 which is exponent
 * Return: 1 if y is 0, -1 if y lessthan 0, or exponential value if correct
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x *= _pow_recursion(x, y - 1));
}
