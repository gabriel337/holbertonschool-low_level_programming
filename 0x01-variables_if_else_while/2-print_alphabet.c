#include <stdio.h>
#include <ctype.h>
/*main - prints the alphabet in lowercase
 *
 * Return: returns 0
 */

int main(void)
{
for (int x = 'A'; x <= 'Z'; x++)
{
x = tolower(x);
putchar(x);
}
return (0);
}
