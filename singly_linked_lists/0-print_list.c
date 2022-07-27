#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */

size_t print_list(const list_t *h)
{
	int acum = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[o] (nill)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			acum = acum + 1;
		}
		h = h->next;
	}
	return (acum);
}
