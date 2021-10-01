#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - will return if the number is - + or == to 0
 * Return: returns 0
*/

int main(void)
{
int n;

srand(time(0));

n = rand() - RAND_MAX / 2;


if (n < 0.0)
printf("%d is negative", n);

else if (n > 0.0)
printf("%d is positive", n);

else
printf("%d is zero", n);
return (0);
}
