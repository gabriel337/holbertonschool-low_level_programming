#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: returns 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar((x / 10) + '0');

		putchar((x / 10) + '0');

	}

	putchar('\n');

	return (0);
}
