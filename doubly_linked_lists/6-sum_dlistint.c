#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - check code
 * @head: pointer
 * Return: sum
 */

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
