#include "main.h"

/**
* print_alphabet_x10 - will accept no argument
*
* Description: 'the function will print out lower case alphabet'
*
* Return: return no value
*/

void print_alphabet_x10(void)
{
int i;
int j;

for (j = 1; j <= 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}

}
