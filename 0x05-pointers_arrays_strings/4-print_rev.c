#include "main.h"

/**
* print_rev - print a string in reverse.
* @s: the string to print in reverse.
*/

void print_rev(char *s)
{
	int i = 0;
	int j;

	j = 0;
	while (s[length] != '\0')
	{
		j++;
	}
	i = j - 1;
	for (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(10);
}
