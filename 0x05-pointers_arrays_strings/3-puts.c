#include <stdio.h>
#include <string.h>
/**
 * _puts - prints a string, followed by a new line
 * @s: the given string
 */
void _puts(char *s)
{
	int i;

	for (i = 0; i < (int)strlen(s); i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
