#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array being passed
 * @size: of array
 * @cmp: function being passed
 * Return: return index number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
