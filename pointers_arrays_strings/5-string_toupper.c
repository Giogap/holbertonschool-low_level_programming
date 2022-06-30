#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 *
 * @m: array
 * Description: min to may
 */

char *string_toupper(char *m)
{
	int i = 0;

	while (m[i] != '\0')
	{
		if (m[i] >= 'a' && m[i] <= 'z')
		{
			m[i] = m[i] - 'A';
		}
		i++;
	}
}
