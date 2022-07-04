#include "main.h"



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
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (checker(n, 2));
}
