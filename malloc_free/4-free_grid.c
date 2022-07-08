#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - check code
 * @grid: **array
 * @height: int
 * 
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
