#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - check the code
 *
 * @s: string to change
 */

void print_rev(char *s)
{
	int i;
	int c = 0;

	for (i = 0; s[i] != 0; i++)
	{
		c = c + 1;
	}
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
