#include "main.h"

/**
* _isalpha - check if a letter is a letter
*
* @c: a character argument
*
* Description: 'the function will print out lower case alphabet'
*
* Return: return no value
*/

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
