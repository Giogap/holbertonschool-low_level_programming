#include "main.h"
/**
 * main -  check the code
 *
 *
 * Return: 0
 */

int main(void)
{
	int n = 0;
	char l;
	char s[] = "_putchar \n";

	while (n <= 8)
	{
		l = s[n];
		_putchar(l);
		n++;
	}

	return (0);
}
