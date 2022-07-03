#include "main.h"
/**
 * _print_rev_recursion - Print strn reverse
 *
 * @s: string to print reverse
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
