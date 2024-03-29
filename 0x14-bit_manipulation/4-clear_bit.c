#include "main.h"
/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number
 * @index: index of bit to be cleared
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

