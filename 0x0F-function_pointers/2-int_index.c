#include "function_pointers.h"
/**
 * int_index - search of an integer
 * @array: array pointer
 * @size: number of array elements
 * @cmp: pointer to function that compare values
 * Return: -1 if no match or size <= 0, index if cmp can't return not 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
