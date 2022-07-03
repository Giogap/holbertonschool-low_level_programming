#include "main.h"
/**
 * _strlen_recursion - check code
 *
 * @s: string
 *
 * Return: tamaño cadena
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

