#include "main.h"
/**
 * checker - check code input.
 * @i: compare
 * @j: number
 * Return: root
 */
int checker(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	if (i * i > j)
	{
		return (-1);
	}
	return (checker(i + 1, j));
}
/**
 * _sqrt_recursion - root
 * @n: check root
 * Return: root of num
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
