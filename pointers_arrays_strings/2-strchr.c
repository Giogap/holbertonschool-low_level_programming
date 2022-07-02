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

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s == NULL)
		{
			return (NULL);
		}
		else if (s[i] == c)
		{
			return (s);
		}		
	}
	return (0);
}
