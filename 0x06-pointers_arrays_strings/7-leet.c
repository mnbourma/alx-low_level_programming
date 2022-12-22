#include <stdio.h>
#include <string.h>
/**
 * leet - encodes a string to 1337
 * @s: string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j, len, n[] = {4, 3, 0, 7, 1};
	char c[] = "aeotl";

	len = (int)strlen(s);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == c[j] || s[i] == toupper(c[j]))
			{
				s[i] = n[j];
			}
		}
	}
}
