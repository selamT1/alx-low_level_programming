#include "main.h"
/**
 * print_triangle - print trigangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, a;
	int count = size;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j < count; j++)
		{
			_putchar(32);
		}
		for (a = 0; a < i; a++)
		{
			_putchar(35);
		}
		count--;
		_putchar('\n');
	}
}
