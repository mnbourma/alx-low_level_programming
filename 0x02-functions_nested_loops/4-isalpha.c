#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: argument to pass to _islower
 *
 * Return: 1 if lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
