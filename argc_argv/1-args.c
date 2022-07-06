#include <stdio.h>

/**
 * main - prints name
 * @argc:  counter
 * @argv:  array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
