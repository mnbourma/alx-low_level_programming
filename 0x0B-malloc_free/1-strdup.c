#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory, 
 * which contains a copy of the string given as a parameter.
 * @str: this is the given string.
 * Return: a pointer to the allocated memory, or NULL.
 */
char *_strdup(char *str)
{
	char *res;

	res = strdup(str);
	if (str == NULL)
	{
		return (NULL);
	}
	return (res);
}