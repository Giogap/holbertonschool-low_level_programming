#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - check the code
 *
 * @str: string to change
 */

void puts2(char *str)
{
	int i;
	int j = 2;
	int c = 2;
	char s[100];

	for (i = 0; i != 0; i++)
	{
		if (c % 2 == 0)
		{
			s[j] = str[i];
			j++;
			c++;
		}
	}
}
