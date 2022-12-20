#include <stdio.h>
/**
 * swap_int - swps the vqlue of two integers
 * @a: first argument
 * @b: second argument
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
