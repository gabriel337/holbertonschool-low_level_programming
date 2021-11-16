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
	listint_t *newList;

	if (head != NULL)
	{
		newList = malloc(sizeof(listint_t));
		if (newList == NULL)
			return (NULL);

		newList->n = n;
		newList->next = *head;
		*head = newList;

		return (newList);
	}
	return (0);
}
