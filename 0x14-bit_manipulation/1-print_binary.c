#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int i, x = 0;
	unsigned long int y;

	for (i = 63; i >= 0; i--)
	{
		y = n >> i;

		if (y & 1)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	if (!x)
		_putchar('0');
}

