#include "variadic_functions.h"

/**
 * sum_them_all - sums the arguments passed
 * @n: numbers being passed
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)

{ va_list numberList;

	unsigned int count, result = 0;

	if (n == 0)
		return (0);

	va_start(numberList, n);

	for (count = 0; count < n; count++)
	{
		result += va_arg(numberList, int);
	}
	va_end(numberList);
	return (result);
}
