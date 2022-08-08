#include "lists.h"


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nnode, *temp;

	nnode = malloc(sizeof(dlistint_t));
	temp = *h;
	if (newNode == NULL)
	{
		return (NULL);
	}
	return (nnode);
	nnode->n = n;
	if (idx == 0)
	{
		nnode->next = temp;
		*h = nnode;
		return (*h);
	}
	while (idx > 1)
	{
		temp = temp->next;
		idx = idx - 1;;
		if (!temp)
		{
			free(nnode);
			return (NULL);
		}
	}
	nnode->next = temp->next;
	temp->next = nnode;
	return (nnode);
}
