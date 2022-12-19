#include "main.h"
/**
 * print_array - print array of n elements
 * @a: pointer to arrary
 * @n: pointer to second arg
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
