#include "main.h"
/**
 * _isalpha - check the upper and lower case letters
 * @c : arg accept letter mem add
 * Return: if true 1, otherwise 0
 */
int _isalpha(int c)
{
	int res;

	if (c >= 65 && c <= 90)
		res = 1;
	else if (c >= 97 && c <= 122)
		res = 1;
	else
		res = 0;

	return (res);
}
