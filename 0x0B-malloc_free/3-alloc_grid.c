#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer of a 2D array
 * @width: width arg1
 * @height: height arg2
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **gr_ptr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	gr_ptr = malloc(sizeof(int *) * height);
	if (gr_ptr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		gr_ptr[x] = malloc(sizeof(int) * width);
		if (gr_ptr[x] == NULL)
		{
			for (; x >= 0; x--)
				free(gr_ptr[x]);
			free(gr_ptr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			gr_ptr[x][y] = 0;
	}
	return (gr_ptr);
}
