#include "main.h"

/**
* rev_string - reverse a string.
* @s: the string to be reversed.
*/

void rev_string(char *s)
{
	int i;
	int j;
	int k;
	char v1;
	char v2;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	j = k - 1;
	i = 0;
	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
