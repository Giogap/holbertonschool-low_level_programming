#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - check code
 * @h: pointer
 * Description: returns the number of elements
 * Return: acum
 */

void free_list(list_t *head)
{
	int cont = 0;

	while (*head != NULL)
	{
		cont = cont + 1;
	}

	head->str = strdup(str);

	if (*head == NULL)
	{
		free(head);
	}
}
