#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: returns 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 99; x++)
	{
		putchar(x);

		if (x != '9')
		{
			putchar(',');

			putchar(' ');

			putchar('0' + x / 10);
		}
	}

	putchar('\n');

	return (0);
}
