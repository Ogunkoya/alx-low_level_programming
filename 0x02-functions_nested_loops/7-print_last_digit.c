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
int last_digit;

if (n < 0)
	n = -n;
last_digit = n % 10;
if (a < 0)
	last_digit = -last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
