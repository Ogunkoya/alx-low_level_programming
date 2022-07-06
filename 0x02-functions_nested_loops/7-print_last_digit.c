#include "main.h"

/**
* print_last_digit - check if a letter is lower capital
*
* @n: a character argument
*
* Description: 'the function will print out lower case alphabet'
*
* Return: return no value
*/

int print_last_digit(int n)
{
int r;

if (n < 0)
	n = -n;
r = n % 10;
_putchar('0' + r);
return (r);
}
