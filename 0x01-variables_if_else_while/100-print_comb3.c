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
		if (x * 10)
			putchar(x * 10 + '0');
	}
	putchar('\n');
		return (0);
}
