#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: this is the size of the array.
 * @c: this is the given character.
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
