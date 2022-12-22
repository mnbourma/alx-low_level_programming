#include <stdio.h>
#include <string.h>
/**
 * _strncpy - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: the number of bytes
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
