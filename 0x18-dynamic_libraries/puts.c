#include "main.h"
/**
 * _puts - puts character
 * @s: point string
 * Return: 0
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
