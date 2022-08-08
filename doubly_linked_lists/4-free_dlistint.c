#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - check code
 * @head: pointer
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nnode;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		nnode = head;
		head = nnode->next;
		free(nnode);
	}
	head = NULL;
}
