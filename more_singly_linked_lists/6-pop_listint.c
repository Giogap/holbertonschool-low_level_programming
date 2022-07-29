#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



int pop_listint(listint_t **head)
{
	listint *tem;

	*tem = *head;
	*head = *head->next;
	*tem = NULL;
}
