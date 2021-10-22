#include "main.h"
#include <stdio.h>

/**
 * main - prints argc, number of aguments passed
 * @argc: arguments passed
 * @argv: array of arguments
 * Return: returns 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		continue;
	}
	printf("%d\n", i - 1);
	return (0);
}
