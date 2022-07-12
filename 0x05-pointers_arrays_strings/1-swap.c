#include "main.h"
/**
* swap_int - function that interchange the value of two integers.
* @a: 1st int
* @b: 2nd int
*/

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	a = *b;
	*b = c;
}
