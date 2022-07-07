#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - check code
 * @str: array
 *
 * Return: str2 or null
 */

char *_strdup(char *str)
{
	int i;
	char *str2;

	if (str == 0)
	{
		return (NULL);
	}

	str2 = malloc(sizeof(*str) * strlen(str) + 1);

	if (str2 == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
