#include "main.h"

/**
 * leet - swaps letters[] with numbers []
 * @str: string being passed
 * Return: returns str
 */

char *leet(char *str)
{

int i, j;
char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

for (i = 0; str[i] != '\0'; i++)
{
	for (j = 0; numbers[j] != '\0'; j++)
	{
		if (str[i] == letters[j])
		{
			str[i] = numbers[j];
		}
	}
}
return (str);
}
