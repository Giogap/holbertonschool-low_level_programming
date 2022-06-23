#include "main.h"

/**
 * print_triangle - check the code
 *
 *@size: # ## ###
 *
 *
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	c = 0;
	b = size - 1;
	while (c < size)
	{
		b = size - 1 - c;
		a = c + 1;
		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		while (a > 0)
		{
			_putchar('#');
			a--;
		}
		_putchar('\n');
		c++;
	}

	if (size <= 0)
		_putchar('\n');

}
