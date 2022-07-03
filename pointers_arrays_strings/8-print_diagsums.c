#include "main.h"
#include <stdio.h>

/**
 * print - check code
 * @s: cadena 1
 * @accept: cadena 2
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int acum1 = 0;
	int acum2 = 0;

	for (i = 0; i < size; i++);
	{
		for (j = 0; j < size; j++)
		{
			if (i = j)
			{
				acum1 = acum1 + a[i][j];
			}	
		}
	}
	printf("%d, ", acum1);

	for (j = 0; j < size; j++)
	{
		i = size - 1;
		acum2 = acum2 + a[i][j];
	}
	printf("%d, ", acum2);
}
