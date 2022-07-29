#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check code
 * @head: pointer
 * Retunt: n
 */

int pop_listint(listint_t **head)
{
	listint_t *tem;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	tem = *head;
	*head = tem->next;
	n = tem->n;
	free(tem);
	return (n);
}
