#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints the second half of a string
 * @s: the given string
 */
void puts_half(char *s)
{
	int i, len, n;
	
	len = (int)strlen(s);
	if (len % 2 == 0)
	{
		n = len / 2;
		for (i = n; i < len; i++)
		{
			putchar(s[i]);
		}
	else
	{
		n = (length_of_the_string - 1) / 2
                for (i = len - n; i < len; i++)
                {
                        putchar(s[i]);
                }
	}
	putchar('\n');
}
