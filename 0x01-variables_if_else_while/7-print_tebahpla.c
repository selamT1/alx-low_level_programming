#include <stdio.h>
/**
 * main - main entry point
 * description : print alphabet in reverse order
 * Return:0
 */

int main(void)
{
	char lt = 'z';

	while (lt <= 'z')
	{
		putchar(lt);
		lt--;
	}
	putchar('\n');
	return (0);
}
