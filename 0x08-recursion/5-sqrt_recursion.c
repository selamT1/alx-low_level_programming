#include "main.h"
/**
 * _sqrt_recursion - return the natural square root
 * @n: arg accepts the square value
 * @x: arg to define square number
 * Return: -1 if n not natural square root
*/
int cal_sqt(int n, int x);
int _sqrt_recursion(int n)
{
	int i = 1;

	return (cal_sqt(n, i));
}
/**
 * cal_sqt - check the number square root or not
 * @n: arg1 square root
 * @x: arg2 inital numb to find the square of the number
 * Return: -1, if not nnumbr, or return sqrt no.
 */
int cal_sqt(int n, int x)
{
	int sno;

	sno = x * x;
	if (sno > n)
		return (-1);
	if (sno == n)
		return (x);
	return (cal_sqt(n, x + 1));
}
