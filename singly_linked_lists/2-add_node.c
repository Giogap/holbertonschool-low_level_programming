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

list_t *add_node(list_t **head, const char *str)
{

	list_t *nnode = malloc(sizeof(list_t));

	if (nnode == NULL)
	{
		return (NULL);
	}

	nnode->str = strdup(str);

	if (nnode->str == NULL)
	{
		free(nnode);
	}

	nnode->len = strlen(nnode->str);
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
