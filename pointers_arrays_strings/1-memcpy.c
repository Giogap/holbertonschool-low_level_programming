#include "main.h"
#include <stdio.h>

/**
 * _memset - check the code
 *
 * @s: array
 * @b: const
 * @n: # dat
 * Description: change for #s
 *
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
