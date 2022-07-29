#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - check code
 * @h: pointer
 * Description: returns the number of elements
 * Return: acum
 */

size_t listint_len(const listint_t *h)
{
	int acum = 0;

	while (h != NULL)
	{
		acum = acum + 1;
		h = h->next;
	}
	return (acum);
}
