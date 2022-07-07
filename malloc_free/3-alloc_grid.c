#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * **alloc_grid - check code
 * @width: int
 * @height: int2
 * Return: mtrz or null
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	char **matz;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/*if (matz == NULL)
	{
		free(matz);
		return (NULL);
	}*/

	matz = malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		matz[i] = malloc(sizeof(int) * width);

		if (matz == NULL)
		{
		return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			matz[i][j] = 0;
		}
	}
	return (matz);
}
