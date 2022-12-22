#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: the number of bytes
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
