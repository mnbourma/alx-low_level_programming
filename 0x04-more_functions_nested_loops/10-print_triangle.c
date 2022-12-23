#include <stdio.h>
/**
 * print_triangle - prints a triangle made #
 * @size: sive of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i < size + 1; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				putchar('#');
			}
			if (i < size)
			{
				putchar('\n');
			}
		}
	}
	putchar('\n');
}
