#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - n = 98
 * Description:  Modify value of n to alter num
 *
 * @x: First value 98
 * Return: n/a
 */
void print_to_98(int x)
{
	int i; 
	int n;
	int y;

	n = 98;  

	if (x <= n)
	{
		for (i = x; i <= n; i++)
		{
			y == 0 ? y = 1 : printf(", ");
			printf("%d", i);
		}
	}
	else
	{
		for (i = x; i >= n; i--)
		{
			y == 0 ? y = 1 : printf(", ");
			printf("%d", i);
		}
	}
	putchar('\n');
}
