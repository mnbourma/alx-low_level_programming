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
	int **two_dim_array, r, c;

	two_dim_array = malloc(sizeof(int *) * height);
	if (two_dim_array == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < height; r++)
	{
		two_dim_array = malloc(sizeof(int) * width);
	}
	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
		{
			two_dim_array[r][c] = 0;
		}
	}
	free(two_dim_array);
	return (two_dim_array);
}
