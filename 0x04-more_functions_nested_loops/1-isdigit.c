#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - checks digit
 *
 * @c: argument to pass to _islower
 *
 * Return: 1 if uppercase and 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
