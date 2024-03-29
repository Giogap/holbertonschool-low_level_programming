#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - check code
 * @head: pointer
 * @index: node starts 0
 * Return: 1 if it succeede, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *next, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (tmp = *head, i = 0, prev = NULL; tmp && i < index; i++)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (-1);

	next = tmp->next;
	if (prev == NULL)
	{
		free(tmp);
		if (next != NULL)
		{
			next->prev = NULL;
			*head = next;
		}
		else
		{
			*head = NULL;
		}
	}
	else if (next == NULL)
	{
		prev->next = NULL;
		free(tmp);
	}
	else
	{
		prev->next = next;
		next->prev = prev;
		free(tmp);
	}
	return (1);
}
