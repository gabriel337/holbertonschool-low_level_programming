#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @s: string to upper
 * Return: return string in uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}

		i++;
	}
	return (s);
}
