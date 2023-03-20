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
	int len = 0, i = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = len; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
