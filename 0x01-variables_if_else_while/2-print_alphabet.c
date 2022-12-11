#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function starting point
 * description: print small case alphabet
 * Return: 0
 */
int main(void)
{
	char alp = 'a';

	/* putchar('a program that prints the alphabet in lowercase\n'); */
	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
