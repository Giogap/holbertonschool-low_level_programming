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

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
	}
	return (s);
}
