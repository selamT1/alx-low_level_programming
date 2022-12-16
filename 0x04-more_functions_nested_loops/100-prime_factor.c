#include <stdio.h>
#include <math.h>
/**
 * main - calculate the largest prime factor
 * Return: 0
 */
int main(void)
{
	long x, max;

	long numb = 612852475143;
	double sq = sqrt(numb);

	for (x = 1; x <= sq; x++)
	{
		if ((numb % x) == 0)
		{
			max = numb / x;
		}
	}
	printf("%ld\n", max);
	return (0);
}
