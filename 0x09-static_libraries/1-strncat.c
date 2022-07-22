#include "main.h"
#include <string.h>

/**
* _strncat -  function that concatenates two strings.
* @src: first string
* @dest: second string
* @n: number of second string to be concatenate
* Return: dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	i = 0;
	while (i < n && *src)
	{
		dest[i + dest_len] = *src;
		src++;
		i++;
	}
	dest[i + dest_len] = '\0';
	return (dest);
}
