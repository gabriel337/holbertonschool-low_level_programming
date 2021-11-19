#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - turns binary num to unsigned int number
 * @b: pointer to a string of 0 & 1
 * Return: number converted or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1, i = 0, len;
	int c;

	len = _strlen(b);

	if (b == NULL)
		return (0);

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);

		if (b[c] == '1')
			i += k;
		k *= 2;
	}
	return (i);
}

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
