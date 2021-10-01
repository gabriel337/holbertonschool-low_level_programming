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
int n,lastDigit;

lastDigit = n%10;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

if (lastDigit < 6)
printf("%d and is less than 6 and not 0\n", lastDigit);

else if (lastDigit > 5)
printf("%d and is greater than 5\n", lastDigit);

else
printf("%d and is 0\n", lastDigit);
return (0);
}
