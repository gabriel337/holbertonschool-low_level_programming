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

printf("Size of a char: %lu byte(s)\n", sizeof(charType));

printf("Size of an int: %lu byte(s)\n", sizeof(intType));

printf("Size of a long int: %lu byte(s)\n", sizeof(long));

printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));

printf("Size of a float int: %lu byte(s)\n", sizeof(floatType));

return (0);
}
