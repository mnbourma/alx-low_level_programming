#include <stdio.h>
/**
 * factorial - returns the factorial of a given number.
 * @n: this is the given number.
 * Return: factorial of n.
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
