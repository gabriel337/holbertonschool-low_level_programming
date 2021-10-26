#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates the string in a newly alocated space in memory
 * @str: string to duplicate in memory
 * Return: retuns string is success or null if string is null
 */
char *_strdup(char *str)
{
	char *src;
	char *p;
	int size = 0;

	if (str == NULL)
	{
	return (NULL);
	}

	while (str[size])
	{
		size++;
	}

	src = malloc(sizeof(char *) + 1);
	p = src;

	while (*str)
	{
		*p++ = *str++;
	}
	
	*p = '\0';
	return (src);
}


