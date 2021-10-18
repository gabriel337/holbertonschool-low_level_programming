#include "main.h"

/**
 * _strchr - locates a character in a string
 *@s: string
 *@c: occurrence
 *Return: returns s if char is found if not returns NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

