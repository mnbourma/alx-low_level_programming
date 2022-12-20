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
	char c[255];

	len = (int)strlen(s);
	for (i = 0; i < len; i++)
	{
		c[i] = *(s + i);
		*(s + i) = *(s + (len - (i + 1)));
		*(s + (len - (i + 1))) = c[i];
	}
}
