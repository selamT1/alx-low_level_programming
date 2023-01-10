#include <stdlib.h>
#include "main.h"
/**
 * count_word -  count the number of words
 * @s: point arg
 * *Return: number of words
 */
int count_word(char *s)
{
	int boo, indx, wrd;

	boo = 0;
	wrd = 0;
	for (indx = 0; s[indx] != '\0'; indx++)
	{
		if (s[indx] == ' ')
			boo = 0;
		else if (boo == 0)
		{
			boo = 1;
			wrd++;
		}
	}
	return (wrd);
}
/**
 * strtow -  splits a string into words.
 * @str: string pointer
 * Return: array pointer if successed or NULL
 */
char **strtow(char *str)
{
	char **arr_ptr, *tmp;
	int start, i, k, len, c, words, end;

	k = 0, len = 0, c = 0;
	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	arr_ptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (arr_ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				arr_ptr[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	arr_ptr[k] = NULL;
	return (arr_ptr);
}
