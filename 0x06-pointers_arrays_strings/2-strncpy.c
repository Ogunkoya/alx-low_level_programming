#include "main.h"

/**
* _strncpy -  function that copies a string..
* @src: string to be copy
* @dest: destination of the copied string
* @n: number
* Return: void
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (j = i; j < n; j++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
