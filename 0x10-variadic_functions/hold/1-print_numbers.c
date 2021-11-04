#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string being passed
 * @n: numbers being passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int count, result = 0;

	va_list numberList;

	va_start(numberList, n);

	for (count = 0; count < n; count++)
	{
		result = va_arg(numberList, unsigned int);
		printf("%d", result);

		if ((count + 1) != n && separator != NULL)
		{
			printf("%s", separator);

		}

	}
	va_end(numberList);
	printf("\n");
}
