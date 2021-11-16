#include "lists.h"

/**
 * sum_listint - sums all the nodes data
 * @head: head of list
 * Return: sum of data if failed then 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
