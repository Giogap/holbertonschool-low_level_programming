#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - check code
 * @head: first pointer
 * @n: n new element
 * Description: add node in the end
 * Return: ptr
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	temp = *head;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;
	ptr->prev = temp;
	return (ptr);
}
