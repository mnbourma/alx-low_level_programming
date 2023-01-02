#include <stdio.h>
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: This is the given string.
 * @accept: This is the string containing the list of characters.
 * Return: the number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strchr(s, accept));
}
