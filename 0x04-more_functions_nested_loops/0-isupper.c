#include "main.h"

/**
* _isupper - Check if paramter c represents an uppercase letter.
* @c: Int representing a character
* Return: Always 0.
*/

int _isupper(int c)
{
	int alp;
	int result;

	result = 0;
	if (alp >= 65 && alp <= 90)
	{
		result = 1;
	}
return (result);
}
