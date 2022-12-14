#include <stdio.h>
#include <string.h>
/**
 * _memset - fills memory with a constant byte.
 * @s: This is a pointer to the block of memory to fill.
 * @b: This is the value to be set.
 * @n: This is the number of bytes to be set to the value.
 * Return: returns a pointer to the memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
