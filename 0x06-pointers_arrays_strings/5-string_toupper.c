#include <stdio.h>
#include <string.h>
/**
 * string_toupper - changes all letters of a string to uppercase
 * @s: first string
 * Return: an uppercase string
 */
char *string_toupper(char *s);
{
	int i;

	for (i = 0; i < (int)strlen(s); i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}
