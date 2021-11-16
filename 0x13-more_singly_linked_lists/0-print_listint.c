#include "lists.h"

/**
 * print_listint - print list elements
 * @h: elements
 * Return: elements
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h == NULL)
			return (0);
		else
			printf("%u\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
