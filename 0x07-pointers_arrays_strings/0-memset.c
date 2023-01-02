#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte
 * @s: string array
 * @b: character repalced
 * @n: number bytes replaced
 * Return: string pointer
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

