#include <stdio.h>
#include <string.h>
/**
 * _strstr - searches a string for any of a set of bytes.
 * @haystack: This is the given string.
 * @needle: This is the substring to be searched within haystack string.
 * Return: a pointer to the beginning of the located substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
