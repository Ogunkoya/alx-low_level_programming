#include "main.h"
/**
* swap_int - function that interchange the value of two integers.
* @a: 1st int
* @b: 2nd int
*/

void swap_int(int *a, int *b)
{
	int mid;

	mid = 0;
	mid = *a;
	*a = *b;
	*b = mid;
}
