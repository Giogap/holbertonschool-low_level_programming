#include "lists.h"
#include <stdlib.h>


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;

	nnode = malloc(sizeof(dlistint_t));

	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->n = n;
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
