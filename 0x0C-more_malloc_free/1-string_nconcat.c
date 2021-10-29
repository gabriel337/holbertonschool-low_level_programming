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
	unsigned int i, j, con, con2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n < j)
		j = n;

	j += i;

	ptr = malloc(sizeof(char *) * (j + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (con = 0; con < i; con++)
	{
		ptr[con] = s1[con];
	}

	for (con2 = 0; con < j; con2++)
	{
		ptr[con] = s2[con2];
		con++;
	}
	con++;
	ptr[con] = '\0';
	return (ptr);
}
