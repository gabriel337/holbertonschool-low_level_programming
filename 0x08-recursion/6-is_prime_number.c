#include "main.h"

/**
 * prime_checker - check prime number
 * @n: number to be check
 * @checker: check number
 * Return: returns numbers if its prime
 */
int prime_checker(int n, int checker)
{
	if (checker == 1)
		return (1);
	if (n % checker == 0)
		return (0);
	else
		return (prime_checker(n, checker - 1));
}

/**
 * is_prime_number - prints 1 if num is prime 0 if its not
 * @n: number to be check
 * Return: returns prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_checker(n, n - 1));
}
