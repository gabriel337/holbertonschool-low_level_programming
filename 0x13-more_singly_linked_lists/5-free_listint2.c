#include "lists.h"

/**
  * free_listint2 - frees list
  * @head: head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	
	if(head)
	{
		while (*head != NULL)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = NULL;
}
