#include <stdio.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: this is the base number.
 * @y: this is the power.
 * Return: value of x^y.
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	if (y < 0)
	{
		return (-1);
	}
	return (1);
}
