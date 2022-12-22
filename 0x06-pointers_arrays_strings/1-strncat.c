#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: n bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
