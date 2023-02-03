#include "main.h"

/**
 * flip_bits - returns the number of bits from to another
 * @n: first numb
 * @m: second numb
 *
 * Return: changed number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, x = 0;
	unsigned long int curr;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = xor >> i;
		if (current & 1)
			x++;
	}

	return (x);
}
