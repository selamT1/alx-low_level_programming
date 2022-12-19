#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: first arg
 * @b: second args
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
