#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 integers in the terminal
 * @argc: argument counts
 * @argv: argument array
 * Return: returns 1 if no digit is added or if 3 + digits are added.
 * (Error) and 0 if suceeded
 */


int main(int argc, char *argv[])

{
	int number1, number2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	result = (number1 * number2);
	printf("%d\n", result);
	return (0);
}

