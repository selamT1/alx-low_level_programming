#include <stdio.h>
/**
 * _isupper - check the upper case letter
 * @c: arg paramenter
 * Return: values
 */

int _isupper(int c)
{
	int res;

	if (c >= 65 && c <= 90)
		res = 1;
	else
		res = 0;
	return (res);
}
