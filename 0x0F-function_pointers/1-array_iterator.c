#include "function_pointer.h"
/**
 * array_iterator - execute a function which given as a parameter
 * @array: array pointer
 * @size: array size
 * @action: func pointer
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
