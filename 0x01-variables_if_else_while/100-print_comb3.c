#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: returns 0
 */
int main(void)
{
	int firstNum, secondNum;

	for (firstNum = '0'; firstNum <= '8'; firstNum++)
	{
		for (secondNum = '0'; secondNum <= '9'; secondNum++)
		{
			if (firstNum < secondNum && firstNum != secondNum)
			{
				putchar(firstNum);
				putchar(secondNum);
				if (!(firstNum == '8' && secondNum == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
