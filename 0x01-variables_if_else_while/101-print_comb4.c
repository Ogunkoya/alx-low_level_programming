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
int ch3;

for (ch1 = 48; ch1 <= 57; ch1++)
{
	for (ch2 = 49; ch2 <= 57; ch2++)
		for (ch3 = 50; ch3 <= 57; ch3++)
		{
			{
				if (ch2 > ch1 && ch3 > ch2)
				{
					putchar(ch1);
					putchar(ch2);
					putchar(ch3);
					if (ch1 != 55 || ch2 != 56 || ch3 != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
}
putchar(10);

return (0);
}
