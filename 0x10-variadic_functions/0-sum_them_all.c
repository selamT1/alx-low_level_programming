#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all parameters
 * @n: size of parameters
 * @...variable parameters
 * Return: zero if there is no args otherwise sum of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, result = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
		result += va_arg(list, int);
	va_end(list);
	return (result);
}
