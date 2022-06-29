#include "main.h"

/**
 * puts_half - check the code
 *
 * @str: string midle
 */

void puts_half(char *str)
{
	int i;
	int j = 0;
	int k;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = i;
	}

	if (j % 2 == 0)
	{
		i = j / 2;
	}
	else
	{
		j = i - 1;
		i = j / 2;
	}
	while (str[i] != '\0')
	{
		k = str[i];
		i++;
		_putchar(k);
	}
	_putchar('\n');
}
