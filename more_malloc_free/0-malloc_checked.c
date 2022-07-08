#include <stdio.h>
#include <stdlib.h>
#include <limits.h>







void *malloc_checked(unsigned int b)
{
	void *vec;

	vec = malloc(b)

	if (vec == NULL)
	{
		exit(98);
	}
	return (vec);
}
