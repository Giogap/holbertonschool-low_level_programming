#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name
 * @argc:  counter
 * @argv:  array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mult;

	while (argc <= 3)
	{
		mult = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mult);
		return (0);
	}
	return (1);	
}
