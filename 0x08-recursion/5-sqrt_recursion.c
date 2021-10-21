#include "main.h"

/**
 * sqrt_checker - verify square number
 * @square: square num
 * @root: root num
 * Return: returns square number
 */

int sqrt_checker(int square, int root)
{
	if (square == root * root)
		return (root);
	else if (root * root > square)
		return (-1);
	else
		return (sqrt_checker(square, root + 1));
}

/**
 * _sqrt_recursion - returns natural numbers of a square number
 * @n:square number to verify
 * Return: returns natural square number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (sqrt_checker(n, 1));
	else
		return (0);
}
