#include "main.h"
#include <stdio.h>

/**
 * puts2 - check the code
 *
 * @str: string to change
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
