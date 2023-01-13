/#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat -  concatenates two strings.
 * @s1: dest string
 * @s2: src string
 * Return: string Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, str_len1 = 0, str_len2 = 0;

	while (s1 && s1[str_len1])
		str_len1++;
	while (s2 && s2[str_len2])
		str_len2++;
	if (n < str_len2)
		str = malloc(sizeof(char) * (str_len1 + n + 1));
	else
		str = malloc(sizeof(char) * (str_len1 + str_len2 + 1));
	if (!str)
		return (NULL);
	while (i < str_len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < str_len2 && i < (str_len1 + n))
		str[i++] = s2[j++];
	while (n >= str_len2 && i < (str_len1 + str_len2))
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

