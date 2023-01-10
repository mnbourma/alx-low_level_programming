#include <stdio.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: this is the given string.
 * Return: a pointer to the allocated memory, or NULL.
 */
char *_strdup(char *str)
{
	char *res;

	if (str == NULL)
	{
		return (NULL);
	}
	res = strdup(str);
	return (res);
}
