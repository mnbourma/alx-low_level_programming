#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string, in reverse followed by a new line
 * @s: the given string
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = (int)strlen(s);
	for (i = 1; i = len; i++)
	{
		putchar(s[len - i]);
	}
	putchar('\n');
}
