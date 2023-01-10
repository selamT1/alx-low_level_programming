#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memory of array
 * @grid: grid arg
 * @height: height arg
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
