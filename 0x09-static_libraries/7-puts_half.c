#include "main.h"

/**
* puts_half - prints the second half of a string.
* @str: string to use.
*/

void puts_half(char *str)
{
	int i;
	int j;
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	j = (k - 1) / 2;
	i = j + 1;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
