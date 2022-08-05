#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - check code
 * @head: first pointer
 * @n: int new node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode;

	nnode = malloc(sizeof(dlistint_t));

	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->n = n;
	nnode->prev = NULL;
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
