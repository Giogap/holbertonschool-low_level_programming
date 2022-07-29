#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint - check code
 * @head: first pointer
 * @n: int new element
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
	{
		return (NULL);
	}

	nnode->n = n;
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
