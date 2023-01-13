#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define ERR_MSG "Error"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * is_digit - check character or not
 * @s: args string
 * Return: 1 if digit or 0 if not
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two  numbers
 * @argc: number of elements
 * @argv: elements of array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int *ptr;
	int i, str_len1, str_len2, len, carry, num1, num2, boo = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	str_len1 = _strlen(s1);
	str_len2 = _strlen(s2);
	len = str_len1 + str_len2 + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (1);
	for (i = 0; i <= str_len1 + str_len2; i++)
		ptr[i] = 0;
	for (str_len1 = str_len1 - 1; str_len1 >= 0; str_len1--)
	{
		num1 = s1[str_len1] - '0';
		carry = 0;
		for (str_len2 = _strlen(s2) - 1; str_len2 >= 0; str_len2--)
		{
			num2 = s2[str_len2] - '0';
			carry += ptr[str_len1 + str_len2 + 1] + (num1 * num2);
			ptr[str_len1 + str_len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			ptr[str_len1 + str_len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (ptr[i])
			boo = 1;
		if (boo)
			_putchar(ptr[i] + '0');
	}
	if (!boo)
		_putchar('0');
	_putchar('\n');
	free(ptr);
	return (0);
}
