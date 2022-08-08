#include "lists.h"
#include <stdlib.h>


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nnode, *temp = *h;
	unsigned int index, cont = 0;

	nnode = malloc(sizeof(dlistint_t));

	if (nnode == NULL)
	{
		return (NULL);
	}

	nnode->n = n;

	if (idx == 0)
	{
		nnode->prev = NULL;
		nnode->next = *h;

		if (*h)
		{
			(*h)->prev = nnode;
		}
		*h = nnode;
		return (*h);
	}
	index = idx - 1;

	while (temp && cont != index)
	{
		cont = cont + 1;
		temp = temp->next;
	}

	if (cont == index && temp)
	{
		nnode->prev = temp;
		nnode->next = temp->next;

		if (temp->next)
		{
			temp->next->prev = nnode;
		}
		temp->next = nnode;
		return (nnode);
	}
	return (0);
}
