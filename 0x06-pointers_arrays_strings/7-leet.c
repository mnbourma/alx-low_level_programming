#include <stdio.h>
#include <string.h>
/**
 * leet - encodes a string to 1337
 * @s: string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aeotl", numbers[] = "43071";

	for (i = 0; i < (int)strlen(s); i++)
	{
		for (j = 0; j < strlen(letters); j++)
		{
			if (toupper(s[i]) == toupper(letters[j]))
			{
				s[i] = numbers[j];
			}
		}
	}
}
