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
	int i; 
	int sum;

	sum = 0;

	if (argc < 1)
	{
		printf("0");
	}
	for (i = 1; i < argc; i++)
	{		
		if (atoi(argv[i] == 0 && *argv[i] != '0'))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
