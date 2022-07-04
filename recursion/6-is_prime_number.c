#include "main.h"

/**
 * checker - prime
 * @i: number
 * @j: see prime
 * Return: 1 prime, 0 no prime
 */

int checker(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	return (checker(i, j + 1));
}

/**
 * is_prime_number - checks prime
 * @n: number
 *
 * Return: 1 prime or 0 no prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (checker(n, 2));
}
