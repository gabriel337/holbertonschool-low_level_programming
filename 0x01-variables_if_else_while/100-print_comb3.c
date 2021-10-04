#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: returns 0
 */
int main(void)
{
int i = 0;
while (i < 100)
{
putchar('0' + i / 10);
putchar('0' + i % 10);
putchar(',');
putchar(' ');
putchar('\n');
i++;
}
return (0);
}
