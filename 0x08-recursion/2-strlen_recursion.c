#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string arg
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int i, count = 0;

	for (i = 0; s[i]; i++)
		count++;
	return (count);
}
