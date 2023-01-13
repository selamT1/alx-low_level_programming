#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *int_ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	int_ptr = malloc(sizeof(int) * size);
	if (int_ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		int_ptr[i] = min++;
	return (int_ptr);
}
