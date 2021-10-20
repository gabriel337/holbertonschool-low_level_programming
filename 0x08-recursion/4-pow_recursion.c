#include "main.h"

/**
 * _pow_recursion - value of x raised to the power of y
 * @x: value
 * @y: power
 * Return: returns x to the power of y, can be positive or negative
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 1)
		{
			return (x);
		}
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
	}
	else
	{
		if (y < 0)
		{
			return (-1);
		}
		else
		{
			return (1 / (x * _pow_recursion(x, (-1) * (y + 1))));
		}
	}
}
