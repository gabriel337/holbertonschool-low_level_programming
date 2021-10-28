#include "main.h"


/*
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j = 0;

	char *ptr;


	if(s1 == NULL && s2 == NULL)
	{
		return ("");
	}

	ptr = malloc(sizeof(char)* j + 1);

	for (i = 0; s1[i] != '\0'; i++, j++)

	{
		;

	}


	for (j = 0; s2[j] != '\0' && i < n; i++,  j++)
	{
		
		;
	}
	
	ptr = malloc(sizeof(char) * j + 1);
	if(ptr == NULL)
	{
	return(NULL);
	}
	m[j] = '\0';

for (i = 0; s1[i] != '\0'; i++, j++)
{
ptr[j] = s1[i];

}

for (i = 0; s2[i] != '\0' && i < n; i++, j++)
{
ptr[j] = s2[i];
}

	return(ptr);

}
