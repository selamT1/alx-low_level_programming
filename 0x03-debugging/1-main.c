#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
/*no need space here */
	i = 0;
/* i never increments so it will always be less than 10,always */
	while (i < 10)
	{
		putchar(i);
	}

	 printf("Infinite loop avoided! \\o/\n");
/* no need space here */
	 return (0);
}
