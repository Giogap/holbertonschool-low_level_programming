#include "main.h"
#include <stdio.h>

/**
 * print_square - print #
 *
 * @size: print # size
 *
 * Description: print #
 */

int main (void)
{
	for (i = 1; i < 101; i++)
	{
		int i;

		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FixxBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%i", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
