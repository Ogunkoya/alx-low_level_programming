#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
* main - A function that print password.
* Return: 0.
*/

int main(void)
{
	int ascii;
	int i;
	int j;
	int random;
	char password[100];
	time_t t;

	ascii = 2772;
	i = 0;
	srand((int) time(&t));
	while (ascii > 126)
	{
		random = rand() % 126;
		password[i] = random;
		ascii -= random;
		i++;
	}
	if (ascii > 0)
	{
		password[i] = ascii;
	}
	else
	{
		i--;
	}
	j = 0;
	while (j <= i)
	{
		printf("%c", password[j]);
		j++;
	}
	return (0);
}
