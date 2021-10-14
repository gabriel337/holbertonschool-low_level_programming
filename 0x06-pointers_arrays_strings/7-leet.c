#include "main.h"

/**
 *
 *
 *
 */

char *leet(char *str)
{

int i;

for (i = 0; str[i] != '\0'; i++)

if(str[i] == 'a' || str[i] == 'A')
{
str[i] = 4;

}
return (str);
}
