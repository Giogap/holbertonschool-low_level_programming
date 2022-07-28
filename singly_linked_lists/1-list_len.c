#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - check code
 * @h: pointer
 * Description: returns the number of elements in a linked
 * Return: acum
 */

size_t list_len(const list_t *h)
{
	int acum = 0;

	while (h != NULL)
	{
		acum = acum + 1;
		h = h->next;
	}
	return (acum);
}
