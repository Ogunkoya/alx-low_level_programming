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
int ch4;

for (ch1 = 48; ch1 <= 57; ch1++)
{
	for (ch2 = 48; ch2 <= 56; ch2++)
	{
		for (ch3 = 48; ch3 <= 57; ch3++)
		{
			for (ch4 = 49; ch4 <= 57)
			{
				putchar(ch1);
				putchar(ch2);
				putchar(44);
				putchar(ch3);
				putchar(ch4);
				if (ch1 != 57 && ch2 != 56 && ch3 != 57 && ch4 != 57)
				{
					putchar(32);
				}
			}
		}
	}
}
putchar(10);

return (0);
}
