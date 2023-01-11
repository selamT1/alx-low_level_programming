#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum str_intber of coins
 * @argc: arg str_intber
 * @argv: arg elements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, amount, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	res = 0;
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && amount >= 0; i++)
	{
		while (amount >= coins[i])
		{
			res++;
			amount -= coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}

