#include <stdio.h>
/**
 * main - prints all possible combination of three
 * description: print only the smallest combination of the tree
 * Return: 0
 */

int main(void)
{
	int di, dj, dk;

	for (di = 0; di < 8; di++)
	{
		for (dj = di + 1; dj < 9; dj++)
		{
			for (dk = dj + 1; dk < 10; dk++)
			{
				putchar((di % 10) + '0');
				putchar((dj % 10) + '0');
				putchar((dk % 10) + '0');

				if (di == 7 && dj == 8 && dk == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
