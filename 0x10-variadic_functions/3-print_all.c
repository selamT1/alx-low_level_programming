#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - print anything
*@format: types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list list;
	char *ptr_char, *sep = "";
	int i = 0;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					ptr_char = va_arg(list, char *);
					if (!ptr_char)
						ptr_char = "(nil)";
					printf("%s%s", sep, ptr_char);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
