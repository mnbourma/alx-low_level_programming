#include <stdio.h>
#include "main.h"
/**
 * print_line - prints a line of n length
 * @n: number of how many lines to print
 * */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
