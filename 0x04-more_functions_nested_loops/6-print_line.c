#include "main.h"
#include <stdio.h>
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
			_putchar('_');
		}
	}
	_putchar('\n');
}
