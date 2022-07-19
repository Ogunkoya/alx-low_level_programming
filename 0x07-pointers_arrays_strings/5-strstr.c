#include "main.h"

/**
* _strstr -  function that locates a substring
* @haystack: pointer to char
* @needle: pointer to char
* Return: pointer or NULL
*/

char *_strstr(char *haystack, char *needle)
{
char *res = haystack;
char *fn = needle;

while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (res);
}
needle = fn;
res++;
haystack = res;
}
return (NULL);
}
