#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function is start here
 * description: exept e and q all letter printed
 * Return: 0
 */
int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		if (lc != 'e' || lc != 'q')
		{
			putchar(lc);
		}
		lc++;
	}
	putchar('\n');
	return (0);
}
