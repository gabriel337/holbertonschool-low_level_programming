#include "lists.h"

/**
 * listint_len - counts the elements
 * @h: elements passing
 * Return: the cuantity of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
