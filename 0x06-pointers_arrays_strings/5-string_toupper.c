#include <string.h>
#include <ctype.h>
#include <main.h>
/**
 * string_toupper - puts string uppercase
 * @s: the given string
 * Return: an uppercase string
 */
char *string_toupper(char *s)
{
	int i, l;
	
	l = (int)strlen(s);
	for (i = 0; i < l; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}
