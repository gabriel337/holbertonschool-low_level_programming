#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: locates occurrence
 * @accept:string
 * Return: returns match or NULL if nothing found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int pos = 0;
	int flag = 0;

	while (*(s + i))
		i++;
	pos = i;
	i = 0;

	while (*(accept + i))
	{
		j = 0;

		while (*(s + j))
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
			j++;
		}
		i++;
	}
	if (flag == 1)
		return (&s[pos]);
	return ('\0');
}
