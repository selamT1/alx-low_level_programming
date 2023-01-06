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
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}


