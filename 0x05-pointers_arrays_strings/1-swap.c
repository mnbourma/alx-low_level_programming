#include <stdio.h>
/**
 * swap_int - swps the vqlue of two integers
 * @a: first argument
 * @b: second argument
 */
void swap_int(*a, *b)
{
	*a = b;
	*b = a;
}
