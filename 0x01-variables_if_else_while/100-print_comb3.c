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

		if (x != 99)
		{
			putchar(',');

			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
