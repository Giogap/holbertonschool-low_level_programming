#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - nat
 *
 * @x: num int
 */
void print_to_98(int x)
{
	if (x > 98)
	{
		while (x >= 98)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
			x--;
		}
	}
	else
	{
		while (x <= 98)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
			x++;
		}
	}
	printf("\n");
}
