#include "main.h"
/**
 * print_diagonal - print some lines
 * @n: number of time lines print
 * Return: 0
 */
int print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
