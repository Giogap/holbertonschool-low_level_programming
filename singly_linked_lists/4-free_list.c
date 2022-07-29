#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - check code
 * @head: pointer
 * Description: free
 *
 */

void free_list(list_t *head)
{
	if (head == 0)
	{
		return;
	}
		free_list(head->next);
		free(head->str);
		free(head);
}
