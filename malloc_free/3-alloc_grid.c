#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - check code
 * @width: int
 * @height: int2
 * Return: mtrz or null
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **matz;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matz = malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		matz[i] = malloc(sizeof(int) * width);

		if (matz == NULL)
		{
			free(matz);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			matz[i][j] = 0;
		}
	}
	return (matz);
}
