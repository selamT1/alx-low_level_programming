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

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
		free(str);
	}
}
