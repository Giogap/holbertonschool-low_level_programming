#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check code
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
	int sum = 0;

	for (i = 0; i < size; i++);
	{
		for (j = 0; j < size; j++)
		{
			if (i = j)
			{
				acum1 = acum1 + a[i][j];
			}	
		}

		for (j = 0; j < size; j++)
		{
			i = size - 1;
			acum2 = acum2 + a[i][j];
		}
	}
	sum = acum1 + acum2;
	printf("%i, %i\n", acum1, acum2);
}
