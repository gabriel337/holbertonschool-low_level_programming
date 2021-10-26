#include "main.h"

/**
 * str_concat - concat two string
 * @s1: string one
 * @s2: string two
 * Return: returns s
 */
char *str_concat(char *s1, char *s2)
{

	int i, j, add, index1, index2;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	add = i + j;
	s = malloc((add + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (index1 = 0; s1[index1] != '\0'; index1++)
	{
		s[index1] = s1[index1];
	}
	for (index2 = 0; s2[index2] != '\0'; index2++)
	{
		s[index1] = s2[index2];
		index1++;
	}
	s[index1] = '\0';
	return (s);
}
