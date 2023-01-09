#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_array - create arrary of char
 * @size: size of array
 * @c: character to copied
 * Return: 0 if fail or empity, otherwise 1
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (0);
	}
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}
	else
		return (0);
	free(str);
}
