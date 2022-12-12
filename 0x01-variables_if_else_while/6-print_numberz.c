#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * description: print no with out char type
 * Return:0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		n++;
	}
	putchar('\n');
	return (0);
}
