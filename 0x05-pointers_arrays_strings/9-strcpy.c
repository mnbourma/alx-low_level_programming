#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copies the string pointed including the null byte
 * @dest: the destination
 * @src: source
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
