#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 *
 * @a: rev array
 * @n: num long
 * Description: reverse
 * Return: a
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;
	int k;

	while (i <= n)
	{
		j = a[n];
		k = a[i];
		a[i] = j;
		a[n] = i;
		i++;
		n--;
	}
}
