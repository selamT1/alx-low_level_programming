#include <stdio.h>
#include <stdlib.h>
/**
 * main -while loop
 * description: print capital and small letters
 * Return: 0
 */
int main(void)
{
	char lc = 'a';
	char UC = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	while (UC <= 'Z')
	{
		putchar(UC);
		UC++;
	}
	putchar('\n');
}
