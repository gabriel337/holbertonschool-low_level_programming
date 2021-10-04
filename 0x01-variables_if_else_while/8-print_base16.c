#include <stdio.h>

/**
 * main - prints base 16
 * Return: returns 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x - 'A'; x <= 'F'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
