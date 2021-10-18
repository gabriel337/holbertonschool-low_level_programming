#include "main.h"

/**
 * _memset - fills memore with a constant byte
 *@s: pointer
 *@b: constant byte
 *@n: fills memory
 *Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

return (s);
}
