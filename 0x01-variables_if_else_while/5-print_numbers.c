#include <stdio.h>

/**
 * main - will return if the number is - + or == to n
 * Return: returns 0
*/
int printDigits(int n)
{
int digit;
  
if(n < 10)
{
digit = n;
printf("%d\n", digit);
}

else
{
digit = printDigits(n/10);
digit = printDigits(n%10);
}
return (digit);
}

int main(void)
{
int num = 3467678;
printDigits(num);

return (0);
}
