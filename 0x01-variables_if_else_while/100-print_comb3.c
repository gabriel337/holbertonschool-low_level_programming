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
		putchar(x);

		if (x != '9')
		{
			putchar(',');

			putchar(' ');
		}

		if (x / 2 == 9)
		{
			putchar(x++);
		}
	}

	putchar('\n');

	return (0);
}
