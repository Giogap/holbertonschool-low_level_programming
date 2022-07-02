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
	unsigned int i = 0;
	
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s);
		else if (s[i + 1]== c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
}
