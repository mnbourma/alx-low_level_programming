#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a tring
 * @s: the given string
 */
void rev_string(char *s)
{
	int i;
	int len;
	char r[255];

	len = (int)strlen(s);
	for (i = 0; i < len; i++)
	{
		r[i] = *(s + (len - (i + 1)));
	}
	for (i = 0; i < len; i++)
	{
		*(s + i) = r[i];
	}
}
