#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: address of head new list
 * @n: int to add new node
 * Return: pointer to the new node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
			return (NULL);

		temp->n = n;
		temp->next = *head;
		*head = temp;

		return (temp);
	}
	return (0);
}
