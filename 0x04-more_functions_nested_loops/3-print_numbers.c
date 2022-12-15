#include "main.h"
/**
 * print_numbers - print the numb form 0 to 9
 * Return: no values
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
