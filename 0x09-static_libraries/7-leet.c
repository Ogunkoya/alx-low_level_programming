#include "main.h"

/**
* leet -  encodes a string into 1337.
* @s: string to code
* Return: the enconde string.
*/

char *leet(char *s)
{
	int i;
	int j;
	int k;
	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				k = j;
				s[i] = e[k];
			}
		}
	}
	return (s);
}
