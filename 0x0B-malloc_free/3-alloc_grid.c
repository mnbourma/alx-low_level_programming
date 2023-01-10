#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: this is the grid width.
 * @height: this is the grid height.
 * Return: a pointer to a 2 array, or NULL if it fails.
 */
int **alloc_grid(int width, int height)
{
	int i, j, *s;

	s = (int *)malloc(width * height * sizeof(int));
	if (width > 0 && height > 0)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				s[i][j] = 0;
			}
		}
		return (s);
	}
	return (NULL);
}
