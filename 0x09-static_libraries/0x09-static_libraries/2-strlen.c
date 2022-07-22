#include "main.h"

/**
* _strlen - Function that determine the length of a string.
* @s: argumentstring
* Return: length of a string s.
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
