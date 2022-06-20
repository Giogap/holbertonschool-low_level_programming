#include <stdio.h>
/**
 * main -  main num
 *
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)

		if (9 == 0)
			continue;

	putchar((x % 10) + '0');

	putchar(',');

	putchar(' ');

	putchar('\n');

	return (0);
}
