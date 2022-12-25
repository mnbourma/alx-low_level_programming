#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * rot13 - encodes a string using rot13
 * Description: rotate by 13
 * @s: string to encode
 * Return: returns the encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	for (i = 0; i < (int)strlen(s); i++)
	{
		for (j = 0; j < (int)strlen(a); j++)
		{
			if ((s[i]) == a[j])
			{
				s[i] = a[(j + 26) % 52];
				break;
			}
		}
	}

	return (s);
}
