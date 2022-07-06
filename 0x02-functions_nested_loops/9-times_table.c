#include "main.h"

/**
* time_table - print out time tables to 9 times
*
* Description: This functio print out times table
* Return: return no value
*/

void times_table(void)
{
int i;
int j;
int k;

for (i = 0; i <= 9; i++)
{
	for (j = 1; j <= 9; j++)
	{
		k = i * j;
		if (k <= 9)
		{
			_putchar(k + 48);
			_putchar(44);
			_putchar(32);
		}
		else
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
	}
	_putchar('\n');
}
}
