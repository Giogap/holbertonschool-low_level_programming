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

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *nnode;

	while (head != NULL)
	{
		head = head->next;
	}

	nnode->len = strlen(nnode->str);
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
