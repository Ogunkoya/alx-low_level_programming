#include "main.h"
#include <stdio.h>

/**
* main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
* Return: Always 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", i)
		}
	}
	printf("Buzz\n");
	return (0);
}
