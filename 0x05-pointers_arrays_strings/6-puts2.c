#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character
 * @s: the given string
 */
void puts2(char *s)
{
	int i;

	for (i = 0; i < (int)strlen(s); i += 2)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
