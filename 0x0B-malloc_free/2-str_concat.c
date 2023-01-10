#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: this is the first string.
 * @s2: this is the second string.
 * Return: a pointer to the allocated memory, or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	if (s2 == NULL)
	{
		return NULL;
	}
	s1 = malloc((sizeof(s1) + sizeof(s2)) * sizeof(char) - 1);
	strcat(s1, s2);
	return (s1);
}
