#include "lists.h"

/**
 * printint_len - check code
 * @h: pointer
 * Return: acum
 */

size_t dlistint_len(const dlistint_t *h)
{
	int acum = 0;

	while (h != NULL)
	{
		acum = acum + 1;
		h = h->next;
	}
	return (acum);
}
