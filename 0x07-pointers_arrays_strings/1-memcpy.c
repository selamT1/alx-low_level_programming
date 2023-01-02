#include "main.h"
/**
 * _memcpy -  function that fills memory with a constant byte
 * @dest: string dest array
 * @src: string source array
 * @n: number bytes replaced
 * Return: string pointer
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i,j;
	int length = 0;
	
	i = 0;
	while ( dest[i])
		length++;
	for (j = 0; j < n; j++)
	{
		dest[length] = src[j];
		length++;
	}
	return (dest);
}


