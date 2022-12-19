#include "main.h"
/**
 * print_rev - print string in a reverse
 * @s: accept string
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	for  (i--; i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
