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

	putchar((x % 10) + 'x');

	putchar('\n');

	return (0);
}
