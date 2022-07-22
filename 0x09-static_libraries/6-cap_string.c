#include "main.h"

/**
* cap_string - this is awesome
* @s: pointer to char params
* Return: *s
*/

char *cap_string(char *s)
{
	int i;
	int j;
	char delimeters[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
		j = 0;
		while (delimeters[j] != '\0')
		{
		if (s[i] == delimeters[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
		{
			s[i + 1] = s[i + 1] - 32;
		}
		j++;
		}
		i++;
	}
	return (s);
}
