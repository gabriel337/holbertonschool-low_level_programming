#include "main.h"

/**
 *print_last_digit - prints the last digit of number
 *@n: number used
 *Return: returns numbers
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
	_putchar(n + 48);
	return (n);
}
