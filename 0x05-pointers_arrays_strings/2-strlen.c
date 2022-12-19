#include "main.h"
/**
 * int _strlen - determine the length of the string
 * @s: arg first
 * Return: some valuse
 */
int _strlen(char *s)
{
	int sleng = 0;

	while (*s != '\0')
	{
		sleng++;
		s++;
	}
	return (sleng);
}
