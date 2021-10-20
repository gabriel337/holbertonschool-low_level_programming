#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: number to be factorial
 * Return: returns -1 if < 0, returns 1 < 1, returns factorial numbers if > 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n < 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

