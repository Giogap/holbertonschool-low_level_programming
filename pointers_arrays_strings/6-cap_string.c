#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 *
 * @m: array
 * Description: min to may
 *
 * Return: char 
 */

char *cap_string(char *m)
{
	int i;
	int j;
	int k = 0;
	char *c = " \t\n;,.!?\"(){}\0";

	if (m[k] >= 97 && m[k] <= 122)
	{
		m[k] = m[k] - 32;
	}
	for (i = 0; m[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (m[i] == c[j])
			{
				if (m[i + 1] >= 97 && m[i + 1] <= 122)
				{
					m[i + 1] = m[i + 1] - 32;
				}
			}
		}
	}
	return (m);
}
