#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Prints diagonal made of \
 *
 * @c: length
 */
void print_diagonal(int c)
{
	int i;
	
	if (c > 0)
	{
		for (i = 0; i < c; i++)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (i < (c - 1))
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
