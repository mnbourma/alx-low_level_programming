#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 */
char *rot13(char *s)
{
	int i, j, index;
	char a[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < (int)strlen(s); i++)
	{
		for (j = 0; j < (int)strlen(a); j++)
		{
			index = (j + 13) % 26;

			if (toupper(s[i]) == toupper(a[j]))
			{
				s[i] = a[index];
			}
		}
	}
	s[0] = toupper(s[0]);
	s[1] = toupper(s[1]);
	s[2] = toupper(s[2]);
	putchar('\n');

	return (s);
}
