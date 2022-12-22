#include <stdio.h>
#include <string.h>
/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: 0 if equals, > 0 is s1 > s2 and < 0 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
