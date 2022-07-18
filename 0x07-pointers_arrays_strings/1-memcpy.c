#include "main.h"

/**
* _memcpy - a function that copies memory area.
* @dest: pointer
* @src: pointer
* @n: size
* Return: *dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

i = 0;
while (; i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
