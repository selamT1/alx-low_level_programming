#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: arg1 parameter size
 * @argv: arg2 array pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
