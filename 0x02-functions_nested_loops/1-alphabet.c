#include "main.h"
#include <stdio.h>

/**
 * main - calls function print_alphabet
 * Return: returns 0
 */

/**
 *print_alphabet - prints the alphabet in lower case
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
