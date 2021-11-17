#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: head of list
 * @idx: index of node
 * @n: int being passed
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_Node, *tmp;
	unsigned int count = 1;

	new_Node = malloc(sizeof(listint_t));
	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	tmp = *head;

	while (tmp != NULL && count != idx)
	{
		tmp = tmp->next;
		count++;
	}

	if (idx > count)
		return (NULL);

	else if (idx == 0)
	{
		new_Node->next = *head;
		*head = new_Node;
	}

	else
	{
		new_Node->next = tmp->next;
		tmp->next = new_Node;
	}
	return (new_Node);
}
