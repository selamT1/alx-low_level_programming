#include "main.h"
/**
 * _strncat - concatinate the second string a the end of the first string
 * @dest: accept the first string pointer
 * @src: accept the second string pointer
 * @n: number of bytes to be appended
 * Return: pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] && i < n; len++, i++)
	{
		dest[len] = src[i];
	}
	return (dest);
}
