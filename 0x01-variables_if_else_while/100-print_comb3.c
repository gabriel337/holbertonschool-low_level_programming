#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: returns 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= 'c'; x++)
	{
		putchar(x);

		if (x != '9')
		{
			putchar(',');

			putchar(' ');

			putchar(x + 1);
		}

	}

	putchar('\n');

	return (0);
}
