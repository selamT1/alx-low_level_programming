#include "main.h"
/**
 * _puts_recursion- a function that prints a string
 * @s: string arguments
 * Return: 0
 */
void _puts_recursion(char *s)
{
	 int i, j, count = 0;
	 char c;
 
	 for (i = 0; s[i]; i++)
		 count++;
	 if (s == "")
		 _putchar('\0');
	 else
		 for (j = 0; j <= count; j++)
		 {
			 _putchar(s[j]);
		 }
}
								              }
