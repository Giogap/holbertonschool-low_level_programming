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
	int j = 1;
	char *n = " \t\n;,.!?\"(){}\0";

	while (m[i] != '\0')
	{		
		if (j = 1 && m[i] >= 97 && m[i] <= 122)
		{	
			m[i] = m[i] - 32;
			j++;
		}
		for (i = 0; n[i]; i++)
		{
			if (m[i] == n[i])
				j--;;
		}
		i++;
	}
}
