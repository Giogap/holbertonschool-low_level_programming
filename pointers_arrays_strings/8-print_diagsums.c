#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check code
 * @a: matrix
 * @size: tamaño
 * 
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int acum1 = 0;
	int acum2 = 0;

	while (i <= (size * size))
	{
		acum1 = acum1 + a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		acum2 = acum2 +  a[j];
		j = j + size - 1;
	}
	printf("%d, %d\n", acum1, acum2);
}
