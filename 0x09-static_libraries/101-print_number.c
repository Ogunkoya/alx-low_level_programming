#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_number - like a hello world
* @n: params an integer
* No return
*/

void print_number(int n)
{
	unsigned int num;

	num = 0;
	if  (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
