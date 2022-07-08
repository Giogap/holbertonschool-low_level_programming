#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - check code
 * @s1: string 1
 * @s2: string 2
 * Return: new pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3 = NULL;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = strlen(s1);
	unsigned int  len2 = strlen(s2);
	unsigned int  n2 = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= len2)
	{
		n2 = len2;
	}
	
	s3 = malloc(sizeof(char) * (len1 + len2));

	if (!s3)
	{
	return (NULL);
	}

	while (i != len1 + n2)
	{
		if (i < len1)
		{
			s3[i] = s1[i];
		}
		else
		{
			s3[i] = s2[j];
			j++;
		}
			i++;
	}
			s3[i] = '\0';
			return (s3);
}
