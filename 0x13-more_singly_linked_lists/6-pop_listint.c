#include "lists.h"

/**
 * pop_listint - deletes head node of list
 * @head: head of the list
 * Return: head data or 0 if failed
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	if (*head != NULL)
	{
		tmp = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (n);
}
