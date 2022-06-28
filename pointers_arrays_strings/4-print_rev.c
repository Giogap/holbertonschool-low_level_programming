#include "main.h"

/**
 * print_rev - check the code
 *
 * @i: -check
 */

void print_rev(char *s)
{
	int i = 0;
	int c = 1;

	while (s[i] != '\0')
	{
		c = c + 1; 
		i++;
	}
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
