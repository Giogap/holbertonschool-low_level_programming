#include "lists.h"
#include <stdlib.h>



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
