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
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
