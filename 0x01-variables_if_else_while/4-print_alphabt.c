#include <stdio.h>

/**
 * main - prints lower case alphabet without q and e letters
 * Return: returns 0
 */

int main(void)
{
char al;

for (al = 'a'; al <= 'z'; al++)
{
while (!((al == 'e' && al == 'q') || al == '\0'))
putchar (al);
}
putchar('\n');
return (0);
}
