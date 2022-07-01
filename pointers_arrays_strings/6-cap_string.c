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
	int i = 0;

	while (m[i] != '\0')
	{
		if (m[i] >= 97 && m[i] <= 122 && m[i + 1] == 32)
		{
		
			m[i + 2] = m[i + 2] - 32;
		}
		i++;
	}
	return (m);
}
