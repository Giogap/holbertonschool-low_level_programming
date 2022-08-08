#include "lists.h"
#include <stdio.h>


int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
	printf("sum = %d", sum);
}
