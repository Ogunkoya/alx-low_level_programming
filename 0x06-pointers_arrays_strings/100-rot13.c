#include "main.h"

/**
* rot13 - Function that encodes a string using rot13.
* @s: String to be encoded using rot13
* Return: An encode string
*/

char *rot13(char *s)
{
int j;
int i;

char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (j = 0; *(s + count) != '\0'; j++)
{
for (i = 0; i < 52; i++)
{
if (*(s + count) == alphabet[i])
{
*(s + count) = rot13[i];
break;
}
}
}
return (s);
}
