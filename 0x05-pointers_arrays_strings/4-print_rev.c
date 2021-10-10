#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer used
 */
void print_rev(char *s)
{
	int i, j, reverse = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		reverse++;
	}

	for (j = (reverse - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
