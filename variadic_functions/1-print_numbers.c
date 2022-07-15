#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - check code
 * @n: long
 * @separator: array
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list largs;

	va_start(largs, n);

	for (i = 0; i < n; i++)
	{
			printf("%d\n", va_arg(largs, int));

	}
	printf("\n");
	va_end(largs);
}
