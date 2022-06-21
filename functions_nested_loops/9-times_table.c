#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int t;
	int i;

	for (i = 0; i < 11; i++)
	{
		t = 9 * i;
		_putchar(t + '0'); 
	}
}
