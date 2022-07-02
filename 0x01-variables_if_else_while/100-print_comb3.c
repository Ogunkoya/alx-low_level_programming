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
int ch1;
int ch2;

for (ch1 = 48; ch1 <= 56; ch1++)
{
	for (ch2 = 49; ch2 <= 57; ch2++)
	{
		putchar(ch1);
		putchar(ch2);
		if (ch1 != 56 || ch2 != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
}
putchar(10);

return (0);
}
