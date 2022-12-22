#include "main.h"
/**
 * leet - encodes
 * @n: some values
 * Return: char value
 */
char *leet(char *n)
{
	int i = 0, j;
	char leet[8] = {'o', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j < 7; J++)
		{
			if (n[i] == leet[j] || (n[i] - 32) == leet[j])
				n[i] =  j + '\0';
		}
		i++;
	}
	return (n);
}
