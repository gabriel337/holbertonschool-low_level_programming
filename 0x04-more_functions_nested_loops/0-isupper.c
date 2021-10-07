#include "main.h"

/**
 * _isupper - checks if c is upper
 * @c: var to be checked
 * Return: returns 1 if c is upper else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

