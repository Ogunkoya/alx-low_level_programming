#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
  
{
int ch1;
int ch2;
int ch3;
int ch4;
	
ch1 = 48;
ch2 = 48;
ch3 = 48;
ch4 = 49;
while (ch1 < 58)
{
	while (ch2 < 58)
	{
		while (ch3 < 58)
		{
			while (ch4 < 58)
			{
				putchar(ch1);
				putchar(ch2);
				putchar(32);
				putchar(ch3);
				putchar(ch4);
				if (!(ch1 == 57 && ch2 == 56 && ch3 == 57 &&
							ch4 == 57))
				{
					putchar(44);
					putchar(32);
				}
				ch4++;
			}
			ch3++;
			ch4 = 48;
		}
		ch2++;
	       	ch2 = ch1;
		ch4 = ch2 + 1;
	}
	ch1++;
	ch2 = 48;
	ch3 = ch1;
	ch4 = ch2 + 1;
}
putchar(10);
  
return (0);  
}
