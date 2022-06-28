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

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
