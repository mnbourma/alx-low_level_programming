#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - puts a string to uppercase
 * @s: first string
 * Return: an uppercase string
 */
char *string_toupper(char *s)
{
	int i, len;
	
	len = (int)strlen(s);
	for (i = 0; i < len; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}
