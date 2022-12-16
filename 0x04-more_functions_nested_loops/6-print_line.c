#include <stdio.h>
/**
 * print_line - Prints a line made of _
 *
 * @n: number of how many _ to print
 **/
void print_line(int n)
{
	int i;
	
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
