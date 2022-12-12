#include <stdio.h>
/**
 * main - function entry and ending point
 * description: num with comman and space
 * Return:0
 */

int main(void)
{
	char n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n < 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
