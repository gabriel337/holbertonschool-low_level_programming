#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory are dest
 * @dest:destination
 * @src: source
 * @n:numbers of bytes
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
