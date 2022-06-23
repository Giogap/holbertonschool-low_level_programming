#include "main.h"

/**
* print_diagonal - check code
*
* @n: num
*
* Description: print ///
*/

void print_diagonal(int n)
{
	int a;
	int b;

	a = 0;

	while (n > 0)
	{
		b = a;
		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		_putchar('\\');
		_putchar('\n');

		a++;
		b--;
	}
	if (a < 1)
	{
		_putchar('\n');
	}
}
