#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print string
 * @separator: string to be printed between strings
 * @n: size of arguments
 * @...a variable number of paramters
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *ptr_char;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		ptr_char = va_arg(list, char *);
		if (ptr_char == NULL)
			printf("nil");
		else
			printf("%s", ptr_char);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
