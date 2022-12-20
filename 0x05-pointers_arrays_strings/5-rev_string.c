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
	char c;

	c = *s;
	len = (int)strlen(s);
	for (i = 0; i < len; i++)
	{
		*(s + i) = c[len - i +1];
	}
}
