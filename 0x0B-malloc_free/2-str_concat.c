#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *stconct;
	int i, j;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";
	i = j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	stconct = malloc(sizeof(char) * (i + j + 1));
	if (stconct == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i])
	{
		stconct[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		stconct[i] = s2[j];
		i++, j++;
	}
	stconct[i] = '\0';
	return (stconct);
}
