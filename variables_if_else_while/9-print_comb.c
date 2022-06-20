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

	for (x = 0; x <= 9; x++)
	{	putchar((x % 10) + '0');		
	if (9 == 0)
		continue;
	putchar(',');

	putchar(' ');
	}
	putchar('\n');

	return (0);
}
