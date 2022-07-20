#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string.
* @s: pointer to string params
* Return: lenght of string
*/

int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(++s));
}
return (0);
}
