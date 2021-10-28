#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimun digit
 * @max: maximum digit
 * Return: returns an array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i++] = min++;
	}
	return (arr);
}
