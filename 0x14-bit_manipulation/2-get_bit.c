#include "main.h"

/**
 * get_bit - value of a bit at given index
 * @n: num being passed
 * @index: bit to get
 * Return: value of the bit at index bit or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

	bits = (n >> index) & 1;

	if ((bits == 1) || (bits == 0))
		return (bits);
	else
		return (-1);
}
