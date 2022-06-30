#include "main.h"

/**
 * _strcmp - check the code
 * @s1: compare with s2
 * @s2: compare with s1
 * 
 * Description: compare
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}
