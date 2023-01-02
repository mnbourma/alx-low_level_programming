#include <stdio.h>
#include <string.h>
/**
 * _strchr - locates a character in a string.
 * @s: This is the given string.
 * @c: This is the character to be searched.
 * Return: a pointer to the first occurrence of the character.
 */
char *_strchr(char *s, char c)
{
	strchr(s, c);
	return (s);
}
