#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string.
 * @s: this is the given string.
 * Return: length of s.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
