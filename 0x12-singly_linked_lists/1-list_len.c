#include "lists.h"

/**
 * list_len - counts numbers of element in the list
 * @h: head
 * Return: the count of list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
