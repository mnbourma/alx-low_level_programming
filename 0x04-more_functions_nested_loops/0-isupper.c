#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - checks if a char is uppercase
 *
 * @c: argument to pass to _islower
 *
 * Return: 1 if uppercase and 0 otherwise
 **/
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
