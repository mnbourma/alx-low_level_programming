#include <stdio.h>
#include <ctype.h>
/**
 * _islower - checks if a char is lowercase
 *
 * @c: argument to pass to _islower
 *
 * Return: 1 if lowercase and 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
