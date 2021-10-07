#include "main.h"

/**
 * _isdigit - check for a digit 0 - 9
 * @c: var to be check
 * Return: returns 1 if its a digit else 0
 */
int _isdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 48 && c <= 57))

		return (1);

	else

		return (0);
}
