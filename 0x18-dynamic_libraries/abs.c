#include "main.h"
/**
 * _abs - calculate absolute value
 * @n: accept arg
 * Return: absoute number
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}


