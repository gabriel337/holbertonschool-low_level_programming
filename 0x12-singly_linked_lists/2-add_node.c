#include "lists.h"

/**
 * _strlen - will return length of string
 * @s: variable use
 * Return: returns char
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node - adds node at the beginning of the list
 * @head: head of the list
 * @str: data
 * Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newList;

	newList = malloc(sizeof(list_t));
	if (newList == NULL)
		return (NULL);

	newList->str = strdup(str);
	newList->len = _strlen(str);
	newList->next = *head;

	*head = newList;
	return (newList);
}
