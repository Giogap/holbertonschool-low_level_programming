#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - check code
 * @head: first pointer
 * @str: streng new element
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *nnode = malloc(sizeof(list_t));

	if (nnode == NULL)
	{
		return (NULL);
	}

	if (nnode->n == NULL)
	{
		free(nnode);
	}

	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
