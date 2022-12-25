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
	char a[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < (int)strlen(s); i++)
	{
		for (j = 0; j < (int)strlen(a); j++)
		{
			if (tolower(s[i]) == tolower(a[j]))
			{
				s[i] = a[(j + 13) % 26];
				break;
			}
		}
	}
	s[0] = toupper(s[0]);
	s[1] = toupper(s[1]);
	s[2] = toupper(s[2]);

	return (s);
}
