#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: This is the given string.
 * @accept: This is the string containing the characters to match.
 * Return: a pointer to the byte in s that matches one of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
