#include "main.h"
/**
 * _puts_recursion- a function that prints a string
 * @s: string arguments
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	else
		_putchar('\n');
}
