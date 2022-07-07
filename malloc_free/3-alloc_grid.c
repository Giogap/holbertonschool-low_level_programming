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
	int k;
	int l;
	int **mtrz;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	mtrz = malloc(sizeof(int *) * height);

	if (mtrz == NULL)
	{
		free(mtrz);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		mtrz[i] = malloc(sizeof(int) * width);

		if (mtrz[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(mtrz[j]);
			}

			free(mtrz);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			mtrz[k][l] = 0;
		}
	}
	return (mtrz);
}
