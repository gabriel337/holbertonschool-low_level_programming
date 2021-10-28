#include "main.h"

/**
 *string_nconcat - concatenates 2 string with malloc
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: returns strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0' && j < n; j++)
		;

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr[j + i + 1] = '\0';

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0' && j < n; i++, j++)
	{
		ptr[i] = s2[j];
	}

	return (ptr);
}
