#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - check code
 * @h: pointer
 * Return: acum
 */

Prototype: size_t print_listint(const listint_t *h);
{
	int acum = 0;

	while (h != NULL)
	{
		if (h->n == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %d\n", h->len, h->n);
		}
		acum = acum + 1;
		h = h->next;
	}
	return (acum);
}
