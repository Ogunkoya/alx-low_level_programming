#include "main.h"

/**
* cap_string - capitalize words
* @str: string
* Return: always return capitalzied string
*/

char *cap_string(char *str)
{
	int flag;
	int i;
	int j;
	char sep[] = ",\t;\n; .!?\"(){}";
	
	i = 0;
	while (str[i] != '\0')
	{
		flag = 0;
		if (i == 0)
		{
			flag = 1;
		}
		else
		{
			j = 0;
			while (sep[j] != '\0')
			{
				if (str[i - 1] == sep[j])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
