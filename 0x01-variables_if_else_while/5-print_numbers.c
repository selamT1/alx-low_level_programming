#include <stdio.h>
/**
 * main-function
 * description: print no
 * Return:0
 */
int main(void)
{
	char n = '0';

	while (n <= '10')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
