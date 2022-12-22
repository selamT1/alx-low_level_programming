#include "main.h"
/**
 * _strcmp - compare two string
 * s1: first ptr
 * s2: second prt
 * Return: if s1 < s2 , -ve, if s1 > s2 +ve
 * or s1 = s2, o
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
