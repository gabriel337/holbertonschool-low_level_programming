#include "main.h"

/*
 *
 *
 */
char *cap_string(char *str)

{
	int i, j;
	char array[] = {',', ';', '.', '!', '?','"', '(', ')' ,'{', '}'};
	int flag = 1;
	
	for (i=0; str[i]!='\0'; i++)
	{
		if(flag == 1)
		{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				
			}
			flag = 0;
		}
		
		for (j = 0; array[j] != '\0'; j++)
		{
			if(str[i] == array[j])
			{
				flag = 1;
			}
		}
	}
	return (str);
}




