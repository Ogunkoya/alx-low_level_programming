#include "main.h"

/**
* _puts - function that prints out a string followed by a new line..
*@str: the string to print.
*/

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		_putchar(str[i]);
	}
	_putchar(10);
}
