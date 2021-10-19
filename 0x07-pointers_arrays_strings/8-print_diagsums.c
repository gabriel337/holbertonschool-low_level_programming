#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a:array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int sumOne = 0;
	int sumTwo = 0;

	while (i <= (size * size))
	{
		sumOne = sumOne + a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		sumTwo += a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", sumOne, sumTwo);
}
