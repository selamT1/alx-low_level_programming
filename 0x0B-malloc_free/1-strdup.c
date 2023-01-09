#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - memory space duplicate
 * @str: arg char ptr
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ptr;
	int index1, index2;

	if (str == NULL)
		return (NULL);
	for (index1 = 0; str[index1]; index1++)
		ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (index2 = 0; str[index2]; index2++)
		ptr[index2] = str[index2];
	return (ptr);
}


