#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check code
 * @argc:  counter
 * @argv:  array
 *
 * Return: 0 - 1 Error
 */

int main(int argc, char *argv[])
{
	int aux = 0; 
	int suma = 0;
	int i; 
	int j = 0;

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j])
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		aux = atoi(argv[i]);
		suma = aux + suma;
	}
	printf("%d\n", suma);
	return (0);
}
