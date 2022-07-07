#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - check code
 * @width: int
 * @height: int2
 * Return: mtrz or null
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
