#include "main.h"
/**
 * times_table - check the code
 *
 * Return: table
 */

void times_table(void)
{
	int t;
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 1; j < 10; j++)
		{
			t = i * j;
			if ((t / 10) > 0)
			{
				_putchar((t / 10) + '0');
			}
			else
			{
				_putchar (' ');
			}
			_putchar((t % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
