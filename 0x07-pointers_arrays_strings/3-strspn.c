#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring.
* @s: String to search for substring.
* @accept: Substring of accepted chars.
* Return: Length of substring.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int c;
char *t = accept;

c = 0;
while (*s++)
{
while (*accept++)
{
if (*(s - 1) == *(accept - 1))
{
c++;
break;
}
}
if (!(*--accept))
{
break;
accept = t;
}
return (c);
}
