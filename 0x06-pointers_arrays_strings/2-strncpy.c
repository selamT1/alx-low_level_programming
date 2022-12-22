#include "main.h"
/**
 * _strncpy - copy the string
 * @dest: dest string pointer
 * @src: source string pointer
 * @n: limit the length of string copied
 * Return: string pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
