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

if (n < 0)
	n = -n;
n = n % 10;
_putchar(n + '0')
return (n);
}
