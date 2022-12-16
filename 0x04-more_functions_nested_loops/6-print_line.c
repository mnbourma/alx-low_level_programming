#include <stdio.h>
/**
 * print_line - Prints 0 to 14 ten times
 *
 * @n: length of line
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
