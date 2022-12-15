#include <unistd.h>
/**
 * _putchar - wirtes the character c
 * @c: the character to print
 *
 * Return: 1 on success
 * on err, -1 return and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
