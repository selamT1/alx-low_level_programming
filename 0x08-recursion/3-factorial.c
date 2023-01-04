#include "main.h"
/**
 * int factorial - return the factorial of the gien number
 * @n: accepted parameter
 * Return: -1 if n is negative int, a if n is 0, otherwise fact.value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
