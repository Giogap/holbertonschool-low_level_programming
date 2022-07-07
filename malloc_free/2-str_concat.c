#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - check code
 * @s1: array 1
 * @s2: array 2
 * Return: array concat or null
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i;
	int j = 0;

	if (!*s1 || !*s2)
	{
		return (NULL);
	}

	s3 = malloc(sizeof(*s3) * (strlen(s1) + strlen(s2)));

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
		j = j + 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s3[j] = s2[i];
		j = j + 1;
	}
	s3[j] = '\0';
	return (s3);
}
