#include <stdio.h>
/**
 * main - prints a string
 * Return: returns 0
 */

int main(void)
{
int intType;

float floatType;

char charType;

long longType;

long long longLongType;

printf("Size of a char: %lu byte", sizeof(charType));

printf("Size of an int: %lu bytes", sizeof(intType));

printf("Size of a long int: %lu bytes", sizeof(long));

printf("Size of a long long int: %lu bytes", sizeof(long long));

printf("Size of a float int: %lu bytes", sizeof(floatType));

return (0);
}
