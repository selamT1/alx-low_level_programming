#include "main.h"
/**
 * _atoi - string 
 * @s: args
 * Return:integer
 */

int _atoi(char *s)                                                                                                                      
{
	int i, sum, n;
	int pass[100];
	sum = 0;
	srand(time(NULL));
	
	for (i = 0; i < 100; i++)
	{
		pass[i] = radn() % 78;
		sum += (pass[i] + '0');
		_putchar(pass[i] + '0');
		
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			_putchar(n + '0');
			break;
		}
	}
}
