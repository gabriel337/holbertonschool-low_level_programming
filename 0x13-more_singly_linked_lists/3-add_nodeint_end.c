#include "lists.h"

/**
 * add_nodeint_end -add new node at the end
 * @head: address of listint_t
 * @n: element passed
 * Return: last node and null if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *lastNode;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	else
	{
		lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = temp;
		return (lastNode);
	}
	return (NULL);
}
