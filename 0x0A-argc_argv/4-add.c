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

int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
