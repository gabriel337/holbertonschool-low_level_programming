#include "lists.h"

/**
 * sum_dlistint - sum all data in nodes
 * @head: head of dlist
 * Return: sum of data in nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
