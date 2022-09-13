#include "search_algos.h"

/**
 * linear_search - check code
 * @array: array
 * @size: size to array
 * @value: key
 * Return: always -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (size == 0 || array == NULL || value == 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
