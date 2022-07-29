#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check code
 * @head: pointer
 * Retunt: NULL;
 */

void free_listint2(listint_t **head)
{
	listint_t *actualNode;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		actualNode = *head;
		*head = actualNode->next;
		free(actualNode);
	}
	head = NULL;
}
