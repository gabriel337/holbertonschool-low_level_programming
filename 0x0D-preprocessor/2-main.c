#include<stdio.h>

/**
 * main - prints name of current file
 * @argc: arguments counts
 * @argv: arguments value
 * Return: returns 0
 */
int main(__attribute__((unused))  int argc,
		__attribute__((unused)) char **argv)
{
	printf("%s\n", __FILE__);

	return (0);
}
