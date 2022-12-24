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
	int r;
	if (c > 0)
	{
		putchar('+');
		r = 1;
	}
	else if (c == 0)
	{
		putchar('0');
		r = 0;
	}
	else
	{
		putchar('-');
		r = -1;
	}
	return (r);
}
