#include "main.h"
/**
 * _isdigit - check the digit
 * @c: arg passed
 * Return: 1 for digit otherwise 0
 */
int _isdigit(int c)
{
	int res;

	if (c >= 48 && c <= 57)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}
