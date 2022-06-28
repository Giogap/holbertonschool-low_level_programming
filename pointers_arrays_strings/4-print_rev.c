#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - check the code
 *
 * @i: check
 * @c: cont
 */

void print_rev(char *s)
{
	int i = 0;
	int c = 1;

	for (i = 0; s[i] != '\0'; i++)
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
