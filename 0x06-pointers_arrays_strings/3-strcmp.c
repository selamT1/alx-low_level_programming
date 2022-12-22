#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: first ptr
 * @s2: second prt
 * Return: if s1 < s2 , -ve, if s1 > s2 +ve
 * or s1 = s2, o
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' &&  s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
