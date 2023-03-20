#include "main.h"
/**
 * _strcat - concatinate the second string a the end of the first string
 * @dest: accept the first string pointer
 * @src: accept the second string pointer
 * Return: pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		++len;
	}
	for (i = 0; src[i] != '\0'; ++len, ++i)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
