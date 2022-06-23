#include "main.h"

/**
 * more_numbers - function to print numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int y;
	int x;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
