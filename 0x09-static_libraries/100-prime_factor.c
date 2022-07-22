#include <stdio.h>

/**
* main -  calculate largest prime of 612852475143
* Return: Success Always
*/

int main(void)
{
	long int num = 612852475143;
	long int divisor;

	for (divisor = 2; divisor < num; divisor++)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
		}
	}
	printf("%ld\n", divisor);
	return (0);
}
