#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all parameters
 * @n : size of parameters
 * Return : zero if there is no args otherwise sum of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
