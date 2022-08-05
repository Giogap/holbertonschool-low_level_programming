#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_dlistint - check code
 * @h: pointer
 * Return: acum
 */

size_t print_dlistint(const dlistint_t *h)
{
	int acum = 0;

	while (h != NULL)
	{
		if (h->n != '\0')
		{
			printf("%d\n", h->n);
		}
		acum = acum + 1;
		h = h->next;
	}
	return (acum);

}
