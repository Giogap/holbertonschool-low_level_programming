#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - no print 2 - 4
*
* Description: numbers 0 - 9
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
