#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - puts string uppercase
 * @s: the given string
 * Return: an uppercase string
 * */
char *string_toupper(char *s)
{
	int i, l;
	
	l = strlen(s);
	for (i = 0; i < l; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}
