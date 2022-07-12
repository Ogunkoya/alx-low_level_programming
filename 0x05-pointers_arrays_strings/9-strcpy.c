#include "main.h"

/**
*_strcpy - copies the string pointed to by src, including \0.
* @src: pointer.
* @dest: pointer.
* Return: the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	i = 0;
	for (i <= j)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
