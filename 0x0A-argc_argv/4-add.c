#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check whether number or not
* @str: array pointer
* Return: 0
*/
	int check_num(char *str)
	{
		unsigned int indx;

		indx = 0;
		while (indx < strlen(str))
		{
			if (!isdigit(str[indx]))
			{
				return (0);
			}
			indx++;
		}
		return (1);
	}
/**
 * main - adds two positive numbers
 * @argc: number of arg
 * @argv: Arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int indx, opr, sum;

	sum = 0, indx = 1;
	while (indx < argc)
	{
		if (check_num(argv[indx]))
		{
			opr = atoi(argv[indx]);
			sum += opr;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		indx++;
	}
	printf("%d\n", sum);
	return (0);
}
