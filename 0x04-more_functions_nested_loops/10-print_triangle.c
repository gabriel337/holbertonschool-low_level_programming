#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: triangle size
 */
void print_triangle(int size)
{
	int i, j, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j <= (size - 1); j++)
		{
			for (i = 0; i < (size - 1) - j; i++)
			{
				_putchar(' ');
			}
			for (x = 0; x <= j; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
