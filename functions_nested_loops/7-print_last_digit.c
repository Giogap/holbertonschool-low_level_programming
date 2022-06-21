#include "main.h"
/**
 * print_last_digit - checks
 *
 * @n: character to check
 *
 * Return: n
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		n = n * -1;
		x = n % 10;
		_putchar(x + '0'); 
		return (x):
	}
	else

		x = n % 10;
		_putchar(x + '0');
		return (x);	
}
