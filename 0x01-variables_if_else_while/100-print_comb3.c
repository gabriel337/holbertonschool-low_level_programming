#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: returns 0
 */
int main(void)
{

	for (int x = 0; x < 90; x++)
	{
	putchar(x);

	putchar(',');

	putchar(' ');
	}

	putchar('\n');

	return (0);
}
