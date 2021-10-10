#include "main.h"

/**
 * puts2 - prints string
 * @str: var used
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i != 1 && i != 3) && (i != 7 && i != 9) &&
				(i != 5))
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
