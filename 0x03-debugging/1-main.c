#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
/* i never increments so it will always be less than 10,always be less than 10*/
	while (i < 10)
	{
		putchar(i);
	}

	 printf("Infinite loop avoided! \\o/\n");
/* no need space b/n printf and return. Statements should start on a tabstop */
	 return (0);
}
