#include "main.h"
/**
 * rev_string - starting point
 * @s: args
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (j < i)
	{
		tmp =s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
		i--;
	}
}
