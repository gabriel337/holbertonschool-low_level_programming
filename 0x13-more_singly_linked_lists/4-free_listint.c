#include "lists.h"
/**
 * free_listint - frees memory from list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->n);
		free(head);
		head = tmp;
	}
}
