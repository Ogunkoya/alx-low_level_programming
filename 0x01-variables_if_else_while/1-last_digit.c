#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: 'the program's description'
*
* Return: Always 0 (Success)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
d = n % 10
if (n > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, d);
}
else if (n == 0)
{
	printf("Last digit of %d is %d and is zero\n", n, d);
}
else if (n < 6)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
}
return (0);

}
