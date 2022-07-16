#include "main.h"

/**
* rot13 - Function that encodes a string using rot13.
* @s: String to be encoded using rot13
* Return: An encode string
*/

char *rot13(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
{
if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
{
	s[i] += 13;
}
else
{
s[i] -= 13;
}
}
return (s);
}
