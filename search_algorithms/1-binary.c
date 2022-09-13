#include "search_algos.h"

/**
 * print_array - check code
 * @array: array
 * @low: value low
 * @high: value high
 */

void print_array(int *array, int low, int high)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
