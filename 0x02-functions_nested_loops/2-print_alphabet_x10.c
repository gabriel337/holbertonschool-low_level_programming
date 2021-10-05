#include <stdio.h>

/**
 * main - calls print_alphabet function
 * Return: returns 0
 */
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();

	return (0);
}

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char c;
	int x;

	x = 0;

	while (x < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		x++;
	}

}

