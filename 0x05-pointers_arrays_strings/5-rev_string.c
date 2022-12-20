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
	char *r;

       	r = s;
	len = (int)strlen(s);
	for (i = 0; i < len; i++)
	{
		s[i] = r[len - (i + 1)];
	}
}
