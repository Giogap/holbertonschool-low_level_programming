#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - check code
 * @h: pointer
 * Return: acum
 */

size_t print_listint(const listint_t *h)
{
	int acum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		acum = acum + 1;
		h = h->next;
	}
	return (acum);
}
