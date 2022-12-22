#include <stdio.h>
#include <string.h>
/**
 * leet - encodes a string to 1337
 * @s: string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	size_t i, j;
	int n[] = {4, 3, 0, 7, 1};
	char c[] = "aeotl";

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(c); j++)
		{
			if (s[i] == c[j] || s[i] == toupper(c[j]))
			{
				s[i] = n[j];
			}
		}
	}
}
