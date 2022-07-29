#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - check code
 * @head: pointer
 * Description: free
 *
 */

void free_listint(listint_t *head)
{
	if (head == 0)
	{
		return;
	}
		free_listint(head->next);
		free(head);
}
