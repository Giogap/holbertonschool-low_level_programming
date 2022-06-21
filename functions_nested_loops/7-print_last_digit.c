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

	x = n % 10;
	_putchar(x + '0');
	return (x);
	
}
