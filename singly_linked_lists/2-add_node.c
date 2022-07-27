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
		free(nnode);
	}

	nnode->str = strdup(str);

	nnode->len = strlen(nnode->str);
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
