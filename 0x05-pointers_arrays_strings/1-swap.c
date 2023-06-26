#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: input parameter
 * @b: input parameter 1
 * return: nothing
*/
void swap_int(int *a, int *b)
{
	int ans;

	ans = *a;
	*a = *b;
	*b = ans;
}
