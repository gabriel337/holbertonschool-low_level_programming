#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: returns 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 100; x++)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		if (x != '9')
		{
			putchar(',');

			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
