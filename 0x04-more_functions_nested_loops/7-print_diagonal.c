#include <stdio.h>
/**
 * print_diagonal - Prints diagonal made of \
 *
 * @n: number of \ to print
 * */
void print_diagonal(int n)
{
	int i;
	
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			if (i < n - 1)
			{
				putchar('\n');
			}
		}
	}
	putchar('\n');
}
