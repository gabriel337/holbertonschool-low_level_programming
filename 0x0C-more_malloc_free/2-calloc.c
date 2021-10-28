#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: size of array
 * Return: returns memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	m = malloc(nmemb * size);

	if (m == NULL)
	{
		return (NULL);
	}

	while (i < nmemb * size)
	{
		m[i++] = 0;
	}
	return (m);
}
