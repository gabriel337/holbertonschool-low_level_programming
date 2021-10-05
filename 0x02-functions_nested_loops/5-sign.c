#include "main.h"

/**
 *print_sign - checks for + 0 and -
 *@n: Character being checked
 *Return: 1 if n is +, 0 if its 0 and - if its -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
