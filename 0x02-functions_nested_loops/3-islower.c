#include "main.h"
/**
 * _islower - checks the letter lowercase or note
 * @c: c accepts the ascii values of the letter
 * Return: 1 if c is lowercase otherwise 0
 */
int _islower(int c)
{
	int res;

	if (c >= 97 && c <= 122)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}
