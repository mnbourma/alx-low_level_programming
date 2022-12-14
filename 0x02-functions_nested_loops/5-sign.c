#include <stdio.h>
/**
 * print_sign - Prints sign of given number
 *
 * @c: argument to pass to _islower
 *
 * Return: 1 if c is greator than 0 or 0 if c equal 0 and -1 otherwise
 */
int print_sign(int c)
{
	if (c > 0)
	{
		return (1);
		putchar('+');
	}
	if (c == 0)
	{
		return (0);
		putchar('0');
	}
	return (-1);
	putchar('-');
}
