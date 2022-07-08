#include "main.h"

/**
* _isdigit - Check if paramter is a digit (0 through 9).
* @c: Int representing a character
* Return: Always 0.
*/

int _isdigit(int c)
{
	int result;

	result = 0;
	if (c >= 48 && c <= 57)
	{
		result = 1;
	}
return (result);
}
