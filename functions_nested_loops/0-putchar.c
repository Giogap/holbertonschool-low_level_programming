#include "main.h"
/**
 * main -  check the code
 *
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char l;
	char s[] = "_putchar \n";

	while (i <= 8)
	{
		l = s[i];
		_putchar(l);
		i++;
	}
	return (0);	
}
