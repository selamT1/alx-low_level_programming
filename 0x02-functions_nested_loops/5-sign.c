#include "main.h"
/**
 * print_sign - check integer numbers sign
 * @n : arg accept the address of parameter
 * Return: if +ve return 1, -ve ret -1, otherwise 0
 */
int print_sign(int n)
{
	int res;

	if (n < 0)
	{
		_putchar('-');
		res = -1;
	}
	else if (n > 0)
	{
		_putchar('+');
		res = 1;
	}
	else
	{
		_putchar('0');
		res = 0;
	}
	return (res);
}
