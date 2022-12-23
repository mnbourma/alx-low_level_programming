#include <stdio.h>
/**
 * print_diagonal - prints diagonal
 * @n: diagonal length
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			if (i < (n - 1))
			{
				putchar('\n');
			}
		}
	}
	putchar('\n');
}
