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
	list_t *nnode, *u = *head;
	int cont = 0;

	nnode = malloc(sizeof(list_t));

	if (nnode == NULL)
	{
		return (NULL);
	}

	while (str[cont] != '\0')
	{
		cont = cont + 1;
	}

	nnode->str = strdup(str);
	nnode->len = cont;
	nnode->next = NULL;

	if (*head == NULL)
	{
		*head = nnode;
		return (nnode);
	}

	while (u->next != NULL)
	{
		u = u->next;
	}
	u->next = nnode;
	return (u);
}
