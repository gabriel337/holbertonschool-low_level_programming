#include "main.h"

/**
 * more_numbers - prints 0 - 14 ten times
 */
void more_numbers(void)
{
	int i, j;
	int firstDigit, lastDigit;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			firstDigit = j / 10;
			lastDigit = j % 10;

			if (firstDigit != 0)
			{

				_putchar(firstDigit + '0');
			}
			if (firstDigit == 0 || firstDigit > 0)
			{
				_putchar(lastDigit + '0');

			}


		}
		_putchar('\n');
	}

}
