#include "main.h"

/**
* string_toupper -  function that capitalizes all words of a string.
*@n: cadena de caracteres.
* Return: n.
*/

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i - 32];
		}
	}
	return (n);
}
