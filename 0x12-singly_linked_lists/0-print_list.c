#include "lists.h"

/**
 *
 *
 *
 *
 */
size_t print_list(const list_t *h)
{

	if(h->str == NULL)
		printf("[0] (nil)");


	while (h != NULL)
	{
		printf("[%u] %s", h->len, h->str);
		printf("\n");
		h = h->next;
	}
	return(2);
}
