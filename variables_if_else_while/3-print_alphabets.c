#include <stdio.h>
/**
 * main -  main alfabeto
 *
 *
 * Return: 0
 */

int main(void)
{
	char l;
	char L;

	for (l = 'a'; l <= 'z'; l++)

		putchar(l);

	for (L = 'a'; L <= 'Z'; L++)

		putchar(L);

	putchar('\n');

		return (0);
}
