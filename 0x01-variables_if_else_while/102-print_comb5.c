#include <stdio.h>
#include <stdlib.h>
/**
* main - main block
*
* Description: Write a program that prints all possible
*
* different combinations of two digits
*
* Return: 0
*
*/

int main(void)	
{
int ch1;
int ch2;
int ch3;
int ch4;

ch4 = 0;
while (ch4 < 10)
{
	ch3 = 0;
	while (ch3 < 10)
	{
		ch2 = 0;
		while (ch2 < 10)
		{
			ch1 = 0;
			while (ch1 < 10)
			{
				if (!(ch4 == ch1 && ch3 == ch2))
				{
					putchar('0' + ch4);
					putchar('0' + ch3);
					putchar(44);
					putchar('0' + ch2);
					putchar('0' + ch1);
					if (!(ch4 + ch3 == 18 && ch1 + ch2 == 17 && ch2 == 9))
					{
						putchar(32);
						putchar(44);
					}
				}
				ch1++;
			}
			ch2++;
		}
		ch3++;
	}
	ch4++;
}

putchar(10);

return (0);

}
