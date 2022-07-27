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
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[o] (nill)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (0);
}
