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
	int n, no;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	no = n % 10;
	if (no > 5)
		printf("the last digit of %i is %i and is greater than 5\n", n, no);
	else if (no != 0 && no < 6)
		printf("the last digit of %i is %i and is less than 6 and not 0\n", n, no);
	else
		printf("the last digit of %i is %i and is 0\n", n, no);
	return (0);
}
