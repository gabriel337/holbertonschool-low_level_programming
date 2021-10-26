#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: characters being passed
 * Return: returns array or null if nothing found
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(char));

	if (arr == NULL && size == 0)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	arr[i] = '\0';
	return (arr);
}
