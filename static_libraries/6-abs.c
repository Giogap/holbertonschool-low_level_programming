
#include "main.h"
#include <stdlib.h>
/**
 * _abs - checks
 *
 * @n: absolute
 *
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	if (n >= 0)
	{
		n = n;
	}
	return (n);
}
