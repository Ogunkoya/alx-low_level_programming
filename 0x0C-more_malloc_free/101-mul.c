#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - multiplies two positive numbers
* @argc: n arguments
* @argv: args
* Return: int
*/

int main(int argc, char const *argv[])
{
(void)argc;
if (argc != 3)
{
printf("Error ");
exit(98);
}
printf(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');
return (0);
}
