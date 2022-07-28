#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - check code
 * @head: first pointer
 * @str: streng new element
 * Return: h
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode, *h = *head;

	nnode = malloc(sizeof(list_t));

	if (nnode == NULL)
	{
		return (NULL);
	}

	nnode->str = strdup(str);

	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = nnode;
	return (h);
}
