#include "lists.h"

/**
 * print_listint - print list elements
 * @h: elements
 * Return: elements
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%u\n", h->n);
			h = h->next;
			count++;
		}
	}
	return (count);
}
