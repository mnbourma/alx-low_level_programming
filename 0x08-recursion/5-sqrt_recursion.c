#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: this is the given number.
 * Return: the square root value of n.
 */
int _sqrt_recursion(int n)
{
	if (sqrt(n) - (int)sqrt(n) == 0)
	{
		return (sqrt(n));
	}
	return (-1);
}
