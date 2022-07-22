#include "main.h"

/**
* _isupper - Check if paramter c represents an uppercase letter.
* @c: Int representing a character
* Return: Always 0.
*/

int _isupper(int c)
{
	int result;

	result = 0;
	if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
return (result);
}
