#include "main.h"
/**
 * is_prime_number -  returns 1 if it is a prime number, otherwise return 0
 * @n: paramenter for prime_no
 * @x: paramenter for prime_no
 * Return: 0
 */
int prime_no(int n, int x);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_no(n, 2));
}
/**
 * prime_no - check the prime no and return 1 or 0
 * @n: number to be checked
 * @x: intial arg for recursive faction
 * Return: 1 if prime, 0 ifnot
 */
int prime_no(int n, int x)
{
	if (x <= n / 2)
	{
		if (n % x == 0)
			return (0);
		else
			return (prime_no(n, x + 1));
	}
	else
	{
		return (1);
	}
}

