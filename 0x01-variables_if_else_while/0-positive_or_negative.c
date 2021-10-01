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
printf("is negative");

else if (n > 0.0)
printf("is positive");

else
printf("is zero");
return (0);
}
