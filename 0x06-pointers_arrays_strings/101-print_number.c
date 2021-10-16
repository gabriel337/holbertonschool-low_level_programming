#include "main.h"

/**
 * print_number - prints n
 * @n: number to br printed
 * Return: returns numbers
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}




