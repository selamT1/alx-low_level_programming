#include <stdio.h>
/**
 * main - Prints all possible combinations
 * Return: 0
 */

int main(void)
{
	int di, dj;

	for (di = 0; di < 9; di++)
	{
		for (dj = di + 1; dj < 10; dj++)
		{
			putchar((di % 10) + '0');
			putchar((dj % 10) + '0');

			if (di == 8 && dj == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
