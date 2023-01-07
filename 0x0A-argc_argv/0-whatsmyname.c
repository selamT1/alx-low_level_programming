#include <stdio.h>
#include "main.h"
/**
 * main - display name of the file
 * @argc: arg1
 * @argv: arg2 array pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
