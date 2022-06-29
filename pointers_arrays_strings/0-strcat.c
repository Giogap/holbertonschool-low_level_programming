#include "main.h"

/**
 * _strcat - check the code
 * @dest: string one
 * @src: add string to string one
 * Description: add src to dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (scr[j] != '\0')
	{
		dest[i] = scr[j];
			i = i + 1;
			j = j + 1;
	}
	return dest;
}
