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
	int i, j;
	int **two_dim_array = (int **)malloc(width * sizeof(int *));

	if (two_dim_array == NULL)
	{
		free(two_dim_array);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		two_dim_array[i] = (int *)malloc(height * sizeof(int));
		if (two_dim_array[i] == NULL)
		{
			free(two_dim_array[i]);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			two_dim_array[i][j] = 0;
		}
	}
	for (i = 0; i < width; i++)
	{
		free(two_dim_array[i]);
	}
	free(two_dim_array);
	return (two_dim_array);
}
