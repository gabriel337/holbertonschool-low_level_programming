#include "main.h"

/**
 * _strlen - will return length of string
 * @s: variable use
 * Return: returns char
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
