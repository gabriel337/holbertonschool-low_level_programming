#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - will return if the number is - + or == to n
 * Return: returns 0
*/
int main(void)
{
int n, lastDigit;
lastDigit = n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

if (lastDigit < 6)
printf("and is less than 6 and not 0");

else if (lastDigit > 5)
printf("and is greater than 5");

else
printf("and is 0");
return (0);
}
