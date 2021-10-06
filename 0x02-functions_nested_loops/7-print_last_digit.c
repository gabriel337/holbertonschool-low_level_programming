#include "main.h"

/**
 *print_last_digit - prints the last digit of number
 *@n: number used
 *Return: returns numbers
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	n = n % 10;
	n = n * -1;

	_putchar(n  + '0');

	return (n);
}
