#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 *@s: string
 *@c: occurrence
 *Return: returns s if char is found if not returns NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; ++s)
	{
		if (*s == c)
			return (s);
	}

	return (NULL);
}

