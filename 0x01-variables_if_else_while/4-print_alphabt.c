#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase
 * Return: returns 0
 */
int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
