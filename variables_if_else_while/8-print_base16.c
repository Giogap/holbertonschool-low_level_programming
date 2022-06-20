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
	char l;

	for (x = 0; x < 10; x++)

	putchar((x % 16) + '0');

	for (l = 'a'; l <= 'f'; l++)

		putchar(l);

	putchar('\n');

	return (0);
}
