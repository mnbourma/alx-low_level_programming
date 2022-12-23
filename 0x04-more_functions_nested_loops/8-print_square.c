#include <stdio.h>
/**
 * print_square - prints a square made of #
 * @size: size of the square
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			if (i < size - 1)
			{
				putchar('\n');
			}
		}
	}
	putchar('\n');
}
