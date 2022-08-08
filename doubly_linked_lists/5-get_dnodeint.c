#include "lists.h"


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nnode = head;
	unsigned int cont = 0;

	while (nnode != NULL)
	{
		if (cont == index)
		{
			return (nnode);
		}
		cont++;
		nnode = nnode->next;
	}
	return (NULL);
}
