#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of list
 * @index:index of list
 * Return: 1 is succeeded or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *next;
	unsigned int i;

	if (head)
	{
		if (*head == NULL)
			return (-1);

		if (index == 0)
		{
			*head = tmp->next;
			free(tmp);
		}

		for (i = 0; tmp != NULL && i < index - 1; i++)
			tmp = tmp->next;

		if (tmp == NULL || tmp->next == NULL)
			return (-1);

		next = tmp->next->next;
		free(tmp->next);
		tmp->next = next;
		return (1);
	}
return (-1);
}
