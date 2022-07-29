#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



int pop_listint(listint_t **head)
{
	listint *tem;
	int n;

	if (*head == NULL || head == NULL)
	{
		retern (0);
	}

	*tem = *head;
	*head = *head->next;
	n = tem->n;
	free(tem);
	return (n);i
}
