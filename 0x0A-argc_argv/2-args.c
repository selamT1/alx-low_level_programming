#include <stdio.h>
#include "main.h"

/**
 * main - argument be printed
 * @argc: arg1 size
 * @argv: arg2 array pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

