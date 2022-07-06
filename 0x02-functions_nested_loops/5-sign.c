#include "main.h"

/**
* print_sign - check if a letter is lower capital
*
* @n: an integer argument
*
* Description: 'tprint sign of a number
*
* Return: return either -1, 0 ot +1
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (+1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);

}

}
