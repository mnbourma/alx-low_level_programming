#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: the given string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i, j;
	char seps[] = " ,;.!?\"(){}\t\n"
	
	for (i = 0; i < (int)strlen(s); i++)
	{
		if (i == 0)
		{
			s[i] = toupper(s[i]);
		}
		for (j = 0; j < (int)strlen(seps); j++)
		{
			if (s[i] == seps[j])
			{
				if (i < (int)strlen(s) - 1)
				{
					s[i + 1] = toupper(s[i + 1]);
				}
			}
		}
	}
	return (s);
}
