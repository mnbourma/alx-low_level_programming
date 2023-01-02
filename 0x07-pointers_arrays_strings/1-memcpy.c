#include <stdio.h>
#include <string.h>
/**
 * _memcpy - copies memory area.
 * @dest: This is pointer to the destination array.
 * @src: This is pointer to the source of data to be copied.
 * @n: This is the number of bytes to be copied.
 * Return: returns a pointer to destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
