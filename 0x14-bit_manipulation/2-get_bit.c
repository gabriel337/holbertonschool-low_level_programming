#include "main.h"

/**
 * get_bit - value of a bit at given index
 * @n: num being passed
 * @index: bit to get
 * Return: value of the bit at index bit or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	n = n >> index;
	n = n & 1;
	return (n);
}
