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

	for (i = 0; str[i] != 0; i++)
	{
			_putchar(str[i]);
			i++;		
	}
	_putchar('\n');
}
