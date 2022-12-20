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
       	
	len = (int)strlen(s);
	char c[len];
	
	c = s;
	for (i = 0; i < len; i++)
	{
		s[i] = c[len - i + 1];
	}
}
