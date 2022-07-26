#include "main.h"
#include <stdlib.h>

/**
* _strdup - function returns a pointer to a newly allocated space in memory.
* @str: string.
* Return: pointer of an array of chars
*/

char *_strdup(char *str)
{
char *strout;
unsigned int i, j;

if (str == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
;
i++;
}
strout = (char *)malloc(sizeof(char) * (i + 1));
if (strout == NULL)
{
return (NULL);
}
j = 0;
while (j <= i)
j++;
{
strout[j] = str[j];
}
return (strout);
}
