#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints argc added
 * @argc: argument count
 * @argv: argument array
 * Return: returns 1 if argc is 1,
 * if other than number are added returns 1
 * returns 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	{
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
