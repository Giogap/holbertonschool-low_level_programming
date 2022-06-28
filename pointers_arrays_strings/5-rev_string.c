#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - check the code
 *
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i;
	int c = -1;

	for (i = 0; s[i] != 0; i++)
	{
		c = c + 1;
	}
	while (c >= 0)
	{
		c--;
	}
	_putchar('\n');
}
