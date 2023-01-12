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
	int row, col;
	int *arr = (int *)malloc(row * col * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			*(arr + row * width + col) = 0;
		}
	}
	free(arr);
	return (arr);
}
