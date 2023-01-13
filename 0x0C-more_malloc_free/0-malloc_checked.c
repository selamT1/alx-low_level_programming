#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory space
 * @b: accept memory size in bytes
 * Return: pointer of allocated address
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	else
		return (str);
}
