#include "main.h"

/**
* string_toupper - function to capitalize a string
* @str: string
* Return: always return capitalzied string
*/

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
