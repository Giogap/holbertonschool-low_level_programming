#include "main.h"
#include <string.h>

/**
 * _strcat - check the code
 * @dest: string one
 * @src: add string to string one
 * Description: add src to dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	size_t n;

	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
		dest[dest_len + i] = '\0';
	}
	return dest;
}
