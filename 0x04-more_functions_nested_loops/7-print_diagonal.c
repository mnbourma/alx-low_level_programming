#include <stdio.h>
#include "main.h"
/**
 * print_line - Prints numbers, from 0 to 14 ten times, followed by a new line
 *
 * @c: length of line
 */
void print_line(int c)
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
			_putchar('\n');
		}
	}
}
