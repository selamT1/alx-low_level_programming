#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- main function prints random number
 * with some comditions
 * description:different numbers will be displayed
 * when the program executed
 * Retrun: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%i is greater than 5\n", n);
	else if (n != 0 && n < 6)
		printf("%i is less than 6 and not 0\n", n);
	else
		printf("%i is equal to 0\n", n);
}
