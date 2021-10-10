#include "main.h"

/**
 * rev_string - function outputs string in reverse
 * @s: input
 */
void rev_string(char *s)
{
	char o = s[0];
	int reverse = 0;
	int i;

	while (s[reverse] != '\0')
		reverse++;

			for (i = 0; i < reverse; i++)
			{
				reverse--;
				o = s[i];
				s[i] = s[reverse];
				s[reverse] = o;

			}
}
