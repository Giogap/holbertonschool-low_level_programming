#include "main.h"
#include <stdlib.h>
/**
 * _strdup - check code
 * @str: array
 *
 * Return: str2 or null
 */

char *_strdup(char *str)
{
	int i;
	int acum = 0;
	char *str2;

	if(str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		acum = acum + i;
	}

	str2 = malloc(sizeof(*str) * acum);

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
