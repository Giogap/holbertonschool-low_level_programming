#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check code
 * @b: int
 *
 * Return: vec
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *vec;

	vec = malloc(b);

	if (vec == NULL)
	{
		exit(98);
	}
	return (vec);
}
