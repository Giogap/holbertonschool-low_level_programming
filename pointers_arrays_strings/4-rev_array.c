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
	int i;
	int j = 0;

	while (a[j] != '\0')
	{
		j = j + 1;
	}

	i = j - 1;
	while (i <= n && i >= 0)
	{
		return (a[i]);
		i = i - 1;
	}
}
