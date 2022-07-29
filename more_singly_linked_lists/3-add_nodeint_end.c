#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - check code
 * @head: first pointer
 * @str: streng new element
 * Description: add node in the end
 * Return: ultimate
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;
	temp = *head;

	ptr = malloc(sizeof(listint_t));

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
	return (ptr);
}
