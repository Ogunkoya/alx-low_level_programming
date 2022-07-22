#include "main.h"
#include <stdio.h>

/**
* _strpbrk - function that searches a string for any of a set of bytes.
* @s: pointer
* @accept: pointer to chars
* Return: s or NULL
*/

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
i = 0;
while (accept[i])
{
if (*s == accept[i])
{
return (s);
}
i++;
}
s++;
}
return (NULL);
}
