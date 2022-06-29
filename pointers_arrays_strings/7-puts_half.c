#include "main.h"

/**
 * puts2 - check the code
 *
 * @str: string to change
 */

void puts_half(char *str)
{
	int i;
	int j;
	int c = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = c + 1;		
	}
	j = c / 2;

	if (j % 2 == 0)
	{
		while (str[j] != '\0')
		{
			_putchar(str[j]);
		}
	}
	else
		c = c - 1;
		j = c / 2;

		while (str[j] != '\0')
		{
			_putchar(str[j]);
		}
}
