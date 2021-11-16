#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of list
 * @head: head of list
 * @index: index of list
 * Return: nth node of the list or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count != index)
	{
		count++;
		head = head->next;
	}
	return (head);
}
