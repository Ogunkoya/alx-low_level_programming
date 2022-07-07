#include "main.h"

/**
* print_to_98 - function to print all numbers less than 98
*
* @n: arg int
*
* Return: return no value
*/

void print_to_98(int n)
{
int i;
int j;

if (n < 98)
{
	for (i = 0; i < 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else if (i == 98)
		{
			printf("%d\n", i);
		}
	}
}
else if (n == 98)
{
	printf(98);
}
else
{
	for (j = n; j >= 98; j--)
	{
		if (j != 98)
		{
			printf("%d, ", j);
		}
		else if (j == 98)
		{
			printf("%d\n", j);
		}
	}
}
